
add_executable(apiTest main.cpp)
add_executable(Demo::Api::Test ALIAS apiTest)

target_link_libraries(apiTest PRIVATE Demo::Api)
target_include_directories(apiTest PRIVATE ../source)