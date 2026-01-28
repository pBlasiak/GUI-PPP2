cmake_minimum_required(VERSION 3.20)
project(ppp_gui_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# gdzie jest FLTKConfig.cmake
set(FLTK_DIR "C:/Users/pblasiak/D/dev/fltk/install/CMake")
find_package(FLTK CONFIG REQUIRED)

# executable
add_executable(ppp_gui_app
    main.cpp
    GUI-PPP2/Window.cpp
    GUI-PPP2/Graph.cpp
    GUI-PPP2/GUI.cpp
)

# GUI-PPP2 headers
target_include_directories(ppp_gui_app PRIVATE
    ${CMAKE_SOURCE_DIR}/GUI-PPP2
)

# FLTK — WŁAŚCIWE TARGETY
target_link_libraries(ppp_gui_app PRIVATE
    fltk
    fltk_images
    ws2_32
    comctl32
    gdi32
    ole32
    uuid
)

# (opcjonalnie OpenGL)
# target_link_libraries(ppp_gui_app PRIVATE fltk_gl)

# Windows system libs
if (WIN32)
    target_link_libraries(ppp_gui_app PRIVATE
        ws2_32
        comctl32
        gdi32
        ole32
        uuid
    )
endif()

