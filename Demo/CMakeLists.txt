cmake_minimum_required(VERSION "3.7")

project(MyAwesomeModule VERSION "1.0.0")

add_subdirectory(ThirdParties)
#Directory for our Api that build our C++ Library
add_subdirectory(Api)
#Directory for intregration's tests
add_subdirectory(ApiIntgTest)
