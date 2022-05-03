cmake_minimum_required(VERSION 3.21.2)

set(CMAKE_CXX_STANDARD 23)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(lme_finder)
add_subdirectory(lme_finder_core)
add_subdirectory(lme_tests)