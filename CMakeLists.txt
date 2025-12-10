cmake_minimum_required(VERSION 3.10)

project(MiniZip)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CORE_SOURCES
    src/core/FrequencyMap.cpp
    src/core/HuffmanTree.cpp
    src/core/Decoder.cpp
)

set(IO_SOURCES
    src/io/BitWriter.cpp
    src/io/HeaderManager.cpp
    src/io/FileReader.cpp
)

set(ARCHIVE_SOURCES
    src/archive/Directory.cpp
    src/archive/Packer.cpp
)

add_executable(minizip 
    main.cpp
    ${CORE_SOURCES}
    ${IO_SOURCES}
    ${ARCHIVE_SOURCES}
)

target_include_directories(minizip PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_link_libraries(minizip stdc++fs)
endif()
