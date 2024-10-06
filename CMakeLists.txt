cmake_minimum_required(VERSION 3.30.4)
project(myproject LANGUAGES C VERSION 1.0)  
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/*.c")
file(GLOB_RECURSE HEADERS "${CMAKE_SOURCE_DIR}/inc/*.h" "C:/C/ShadowsocksR-Live-CSTL/cstl/inc/*.h")

add_library(cstl STATIC IMPORTED)
set_target_properties(cstl PROPERTIES IMPORTED_LOCATION "C:/C/ShadowsocksR-Live-CSTL/build/libcstl.a")

message("hello\n")
include_directories("${CMAKE_SOURCE_DIR}/inc" "C:/C/ShadowsocksR-Live-CSTL/cstl/inc")
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} cstl)