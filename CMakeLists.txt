cmake_minimum_required(VERSION 3.10)
project(vnscript_ast)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Добавляем политику для решения предупреждения DOWNLOAD_EXTRACT_TIMESTAMP
if(POLICY CMP0135)
  cmake_policy(SET CMP0135 NEW)
endif()

# Загружаем ANTLR4 C++ runtime
include(FetchContent)
FetchContent_Declare(
  antlr4_runtime
  GIT_REPOSITORY https://github.com/antlr/antlr4.git
  GIT_TAG        4.13.2
  SOURCE_SUBDIR  runtime/Cpp
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(antlr4_runtime)

# Создаем директорию src, если её нет
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/src)

# Добавляем custom command для генерации исходников
add_custom_command(
  OUTPUT
    ${CMAKE_SOURCE_DIR}/src/VNScriptLexer.cpp
    ${CMAKE_SOURCE_DIR}/src/VNScriptParser.cpp
    ${CMAKE_SOURCE_DIR}/src/VNScriptBaseVisitor.cpp
    ${CMAKE_SOURCE_DIR}/src/VNScriptVisitor.cpp
  COMMAND
    java -jar ${CMAKE_SOURCE_DIR}/third_party/antlr/antlr-4.13.2-complete.jar -Dlanguage=Cpp -visitor -o ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/VNScript.g4
  DEPENDS
    ${CMAKE_SOURCE_DIR}/VNScript.g4
  COMMENT "Generating ANTLR4 C++ sources"
)

# Создаем цель для генерации исходников
add_custom_target(generate_parser DEPENDS
  ${CMAKE_SOURCE_DIR}/src/VNScriptLexer.cpp
  ${CMAKE_SOURCE_DIR}/src/VNScriptParser.cpp
  ${CMAKE_SOURCE_DIR}/src/VNScriptBaseVisitor.cpp
  ${CMAKE_SOURCE_DIR}/src/VNScriptVisitor.cpp
)

# Добавляем исполняемый файл
add_executable(parse
  main.cpp
  src/VNScriptLexer.cpp
  src/VNScriptParser.cpp
  src/VNScriptBaseVisitor.cpp
  src/VNScriptVisitor.cpp
)

# Добавляем зависимость от генерации исходников
add_dependencies(parse generate_parser)

# Добавляем пути к заголовочным файлам
target_include_directories(parse PRIVATE
  ${CMAKE_SOURCE_DIR}/src
  ${antlr4_runtime_SOURCE_DIR}/runtime/Cpp/runtime/src
)

# Линкуем с библиотекой ANTLR4
target_link_libraries(parse antlr4_static pthread)

