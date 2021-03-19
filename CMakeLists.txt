cmake_minimum_required(VERSION 3.0.0)
project(3090 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(3090 main.cpp in.cpp CodeCraft.cpp)
INCLUDE_DIRECTORIES(/home/sz2/HuaWei/3090/in)
INCLUDE_DIRECTORIES(/home/sz2/HuaWei/3090/CodeCraft)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
