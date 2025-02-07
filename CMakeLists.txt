cmake_minimum_required(VERSION 3.29.0) #指定cmake版本3.29以上
PROJECT(Planning) #定义工程名
set(CMAKE_CXX_STANDARD 17)#指定C++版本17以上
#变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)#动态库和执行文件.exe指定到bin目录以下

#动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)

add_library(common
SHARED
${SRC_LISTS}
) #生成动态库
#动态库要包含所依赖的头文件
target_include_directories(common
PUBLIC
${PROJECT_SOURCE_DIR}/include
)
#可执行文件
add_executable(planning_main planning_main.cpp)
#可执行文件也要包括所依赖的头文件
target_include_directories(planning_main
PUBLIC
${PROJECT_SOURCE_DIR}/include
)
#可执行文件链接动态库
target_link_libraries(planning_main
PUBLIC
common
)