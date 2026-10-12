cmake_minimum_required(VERSION 3.12)
project(GUI-PPP2-main CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Automatyczne znalezienie FLTK w folderze obok projektu
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/../fltk/install")
find_package(FLTK CONFIG REQUIRED)

add_executable(GUI-PPP2-main
    main.cpp
    GUI-PPP2/Window.cpp
    GUI-PPP2/Graph.cpp
    GUI-PPP2/GUI.cpp
)

target_include_directories(GUI-PPP2-main PRIVATE
    ${CMAKE_SOURCE_DIR}/GUI-PPP2
)

target_link_libraries(GUI-PPP2-main PRIVATE
    fltk
    fltk_images
)

if (WIN32)
    target_link_libraries(GUI-PPP2-main PRIVATE
        ws2_32
        comctl32
        gdi32
        ole32
        uuid
    )
endif()