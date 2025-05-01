cmake_minimum_required(VERSION 3.10)
project(vnscript_ast)

set(CMAKE_CXX_STANDARD 17)

# Не ищем ANTLR как пакет, просто указываем пути напрямую
include_directories(/usr/local/include/antlr4-runtime)
link_directories(/usr/local/lib)

add_executable(parse
    main.cpp
    VNScriptLexer.cpp
    VNScriptParser.cpp
    VNScriptBaseVisitor.cpp
    VNScriptVisitor.cpp
)

target_link_libraries(parse antlr4-runtime pthread)

