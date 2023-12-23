CONFIG      += plugin release
TARGET      = $$qtLibraryTarget(kediengine)
TEMPLATE    = lib

HEADERS     = kediplugin.h
SOURCES     = kediplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

QT += designer
QT += network

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(kedi.pri)
