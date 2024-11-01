cmake_minimum_required(VERSION 3.29)
project(CmakeProject)

set(CMAKE_CXX_STANDARD 20)

#add_executable(CmakeProject main.cpp
#        lib/test/test.cpp
#        lib/test/test.hpp
#)


# include_directories 命令用于指定编译时需要包含的头文件目录。这个命令告诉编译器在处理源文件时去哪里寻找头文件
include_directories(
        source
        static/test
        static/point
)

file(GLOB_RECURSE static_SOURCES "static/*.*" )
file(GLOB_RECURSE SOURCES "main.cpp" )


add_executable(CmakeProject ${SOURCES} ${static_SOURCES})


