FROM ubuntu:22.04

# 1. Установка всех необходимых зависимостей
RUN apt-get update && \
    apt-get install -y openjdk-17-jre-headless cmake g++ wget git make graphviz uuid-dev pkg-config

WORKDIR /work

# 2. Копируем исходники
COPY VNScript.g4 .
COPY novel.txt .
COPY main.cpp .
COPY CMakeLists.txt .

# 3. Скачиваем ANTLR4 jar и исходники C++ runtime
RUN wget -O antlr4.jar https://www.antlr.org/download/antlr-4.13.1-complete.jar && \
    git clone --depth=1 https://github.com/antlr/antlr4.git && \
    mv antlr4/runtime/Cpp antlr4-cpp-runtime

# 4. Генерируем C++ парсер из грамматики
RUN java -jar antlr4.jar -Dlanguage=Cpp -visitor VNScript.g4

# 5. Исправляем возможный баг case 0: 6 break;
RUN find . -type f -name '*.cpp' -exec sed -i 's/\(case 0:\) [0-9]\+ break;/\1 break;/' {} +

# 6. Собираем и устанавливаем ANTLR4 C++ runtime (динамическая линковка!)
RUN mkdir antlr4-cpp-runtime/build && cd antlr4-cpp-runtime/build && \
    cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local && \
    make -j$(nproc) && make install

# 7. Собираем ваш проект (CMakeLists.txt уже правильный)
RUN cmake . && make

# 8. Запуск парсера и генерация PNG
CMD ["sh", "-c", "./parse && dot -Tpng tree.dot -o tree.png && echo 'Готово: tree.png'"]
# CMD ["sh", "-c", "./parse"]

