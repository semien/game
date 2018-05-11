#Change this if you need to target a specific CMake version
cmake_minimum_required(VERSION 2.6)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()
# (you can also set it on the command line: -D CMAKE_BUILD_TYPE=Release)

project(game)

set (CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_NAME "game")
add_executable(${EXECUTABLE_NAME} main.cpp Factories.cpp Game.cpp Point.cpp Application.cpp Button.cpp Technique.cpp Towers.cpp Command.cpp Controller.cpp GameState.cpp View.cpp)

add_subdirectory("${CMAKE_SOURCE_DIR}/googletest")
include_directories("${CMAKE_SOURCE_DIR}/SFML-2.4.2/include")
link_directories("${CMAKE_SOURCE_DIR}/SFML-2.4.2/lib")
target_link_libraries(${EXECUTABLE_NAME} sfml-window sfml-audio sfml-graphics sfml-network sfml-system gtest)

install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)
