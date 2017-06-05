
add_executable(ApiIntegrationsTest source/main.cpp)
add_executable(Demo::ApiIntegrationsTest ALIAS ApiIntegrationsTest)

target_link_libraries(ApiIntegrationsTest PRIVATE Demo::Api)
target_include_directories(ApiIntegrationsTest PRIVATE ../Api/source/)