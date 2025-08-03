cmake_minimum_required(VERSION 3.19)
project(sisBancario LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(sisBancario
    main.cpp
    node.h
    queue.h
    ticket.h
)

target_link_libraries(sisBancario
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS sisBancario
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
