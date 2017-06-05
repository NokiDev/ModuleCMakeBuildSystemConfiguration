
set(SOURCES source/api_impl.cpp)

add_library(Api ${SOURCES})
add_library(Demo::Api ALIAS Api)

add_subdirectory(test)