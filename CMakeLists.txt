cmake_minimum_required(VERSION 3.22.1)
project (UsingDog VERSION 1.0 DESCRIPTION "using the dog library")
set(CMAKE_CXX_STANDARD 17)


# normally all we need is to clone the DogLib dir
# add_subdirectory(DogLib)
# but for this example we will use FetchContent:
include(FetchContent)
FetchContent_Declare(DogLib
    GIT_REPOSITORY https://github.com/DanDCD/DogLib.git
    GIT_TAG "origin/main")
FetchContent_MakeAvailable(DogLib)

add_subdirectory(UsingDog)
