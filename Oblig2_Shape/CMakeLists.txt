cmake_minimum_required(VERSION 3.5)

project(Oblig2_Shape LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Oblig2_Shape main.cpp
    base.h
    circle.h
    square.h
    triangle.h

)

include(GNUInstallDirs)
install(TARGETS Oblig2_Shape
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
