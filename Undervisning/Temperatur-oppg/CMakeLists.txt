cmake_minimum_required(VERSION 3.5)

project(Temperatur-oppg LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Temperatur-oppg main.cpp
    header.h)

include(GNUInstallDirs)
install(TARGETS Temperatur-oppg
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
