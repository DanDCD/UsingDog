include_directories(../DogLib/include)
include_directories(include)

file (GLOB sourcefiles "src/*.cpp")

add_executable(UsingDog ${sourcefiles})
target_link_libraries(UsingDog DogLib)