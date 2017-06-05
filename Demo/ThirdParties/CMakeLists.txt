set(SERVER_PATH "C:/Users/nokid/Desktop/Soutenance[2016-2017]/DemoProject/DemoEnv/ThirdParties")


set(dependencies
    "Module1:1.0.0"
    "Module2:1.0.0"
    "Module3:1.0.0"
    "Module4:1.0.0"
)

#Our CMake macro sdefined in an annex file
function(find_dependencies)
  foreach(dependency ${dependencies})
    string(REGEX REPLACE "[:]" ";" tmp_list ${dependency})
    list(GET tmp_list 0 dependencyName)
    list(GET tmp_list 1 dependencyVersion)
    message("TEST . ${dependencyName} ${dependencyVersion} ")
    IF(EXISTS "${SERVER_PATH}/${dependencyName}/${dependencyVersion}")
		file(MAKE_DIRECTORY ${dependencyName})
      file(COPY "${SERVER_PATH}/${dependencyName}/${dependencyVersion}" DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/${dependencyName}")
    else()
      message("dependency ${dependencyName}:${dependencyVersion} NOT FOUND")
    endif()
  endforeach()
endfunction()

function(load_dependencies)
  foreach(dependency ${dependencies})
    string(REGEX REPLACE "[:]" ";" tmp_list ${dependency})
    list(GET tmp_list 0 dependencyName)
    list(GET tmp_list 1 dependencyVersion)
    message("${dependencyName} ${dependencyVersion} ")
    set(${dependencyName}_DIR ${CMAKE_SOURCE_DIR}/${dependencyName} PARENT_SCOPE)
    message("${CMAKE_SOURCE_DIR}/${dependencyName}")
    find_package(${dependencyName} ${dependencyVersion} REQUIRED)
  endforeach()
endfunction()

find_dependencies()
#load_dependencies()
