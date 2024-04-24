cmake_minimum_required(VERSION 3.5)

project(Oblig3_ArealVask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Oblig3_ArealVask main.cpp)

include(GNUInstallDirs)
install(TARGETS Oblig3_ArealVask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
