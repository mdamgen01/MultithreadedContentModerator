cmake_minimum_required(VERSION 4.1)
project(content_moderator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add this line
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(content_moderator
        src/main.cpp
        src/Scanner.cpp
        src/RuleEngine.cpp
        src/ThreadPool.cpp
        src/Tokenizer.cpp
        src/ResultCollector.cpp
        src/OffensiveWordRule.cpp
)
