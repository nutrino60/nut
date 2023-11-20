add_library(lib SHARED
        lib.cpp
        )
target_include_directories(lib
        SYSTEM PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )
set_target_properties(lib PROPERTIES OUTPUT_NAME "lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
        PREFIX "")

target_link_libraries(lib
        PUBLIC
        )
