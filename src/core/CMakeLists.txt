include(files.cmake)

add_library(core STATIC ${HPP_FILES} ${CPP_FILES})

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(core CONAN_PKG::libcurl)