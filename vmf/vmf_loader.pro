TEMPLATE      = lib
CONFIG       += plugin c++14
QT           += core gui widgets
INCLUDEPATH  += ../include
HEADERS       = vmf_loader.hpp
SOURCES       = vmf_loader.cpp
DISTFILES    += vmf_loader.json
TARGET        = $$qtLibraryTarget(scl_vmfloader)
DESTDIR       = $$PWD/../plugins
