#####################################################################
#
# The project uses split build where all project sources are 
# compiled into a library which then linked together with main.cxx
# This approach allows to run unit tests for our code.
#
#####################################################################

cmake_minimum_required(VERSION 3.0)

set(This MyProject)

project(${This})

set(Sources
    src/foo.cxx
)

add_library(lib${This} ${Sources})

add_executable(${This} src/main.cxx)
target_link_libraries(${This} lib${This})


enable_testing()
add_subdirectory(test)



