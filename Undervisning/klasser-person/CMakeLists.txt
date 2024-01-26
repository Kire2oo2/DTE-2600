cmake_minimum_required(VERSION 3.5)

project(klasser-person LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(klasser-person person.cpp
    person.h
    main.cpp)

include(GNUInstallDirs)
install(TARGETS klasser-person
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
