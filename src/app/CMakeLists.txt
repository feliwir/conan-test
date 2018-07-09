include(files.cmake)

add_executable(app ${HPP_FILES} ${CPP_FILES})

target_link_libraries(app core)