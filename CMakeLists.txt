cmake_minimum_required(VERSION 4.1)
project(content_moderator)

set(CMAKE_CXX_STANDARD 20)

add_executable(content_moderator main.cpp
        Scanner.cpp
        Scanner.h
        RuleEngine.cpp
        RuleEngine.h
        src/ThreadPool.cpp
        include/ThreadPool.h
        include/ThreadPool.h
        src/Tokenizer.cpp
        include/Tokenizer.h
        src/ResultCollector.cpp
        include/ResultCollector.h
)
