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
        static/pointerTest
)

file(GLOB_RECURSE static_SOURCES "static/*.*" )
file(GLOB_RECURSE SOURCES "main.c" )


add_executable(CmakeProject ${SOURCES} ${static_SOURCES})




# 动态链接库   =====================
# 动态链接库 lib 中的 CMakeLists.txt 是 可以写到这里的，
# 1、 使用flie 将 获取到 路径       file
# 2、 创建 创建动态链接库            add_library
# 3、 设置目标的输出目录和版本信息     set_target_properties
# 4、 使得其他目标可以找到头文件       target_include_directories

file(GLOB lib_printTask_SOURCES "lib/PrintTask/*.*" )

# 创建动态链接库
# add_library 是 CMake 中用于创建库（library）目标的命令，它可以被用来创建静态库、共享库或模块库。利用该命令，开发者可以将源文件编译成库，并在其他项目或目标中使用这些库。
add_library(Lib_PrintTask_SOURCES SHARED ${lib_printTask_SOURCES})


# 设置库版本和输出名称 ; 设置目标的输出目录和版本信息
set_target_properties(
        Lib_PrintTask_SOURCES
        PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/lib"
)



#添加动态链接库 的include ;  包含目录，使得其他目标可以找到头文件
target_include_directories(
        CmakeProject
        PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/lib/PrintTask"
)

# ==================================


# 最后 这里 使用  target_link_libraries 将 lib 动态链接库 添加到 主项目

# 添加动态链接库到 主项目
# 在 CMake 中 , target_link_libraries 命令用于指定目标（如可执行文件或库）所依赖的其它库。这是一个重要的命令，它可以确保所有目标在构建时链接到这些依赖库，并且可以处理库的查找和链接顺序。
target_link_libraries(
        CmakeProject
        PRIVATE
        Lib_PrintTask_SOURCES
)


