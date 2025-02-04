TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bankAccount.cpp \
        creditAccount.cpp \
        customer.cpp \
        main.cpp

HEADERS += \
    bankAccount.h \
    creditAccount.h \
    customer.h
