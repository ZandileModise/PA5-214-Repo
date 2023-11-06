cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled1 main.cpp
        Restaurant.cpp
        Restaurant.h
        Customer.cpp
        Customer.h
        Order.cpp
        Order.h
        OrderFactory.cpp
        OrderFactory.h
        PastaOrder.cpp
        PastaOrder.h
        PizzaOrder.cpp
        PizzaOrder.h
        RestaurantMomento.cpp
        RestaurantMomento.h
        Table.cpp
        Table.h
        TotalOrders.cpp
        TotalOrders.h
        PartyStates.cpp
        PartyStates.h
        Exceptions.cpp
        Exceptions.h
        Arrival.cpp
        Arrival.h
        Waiter.cpp
        Waiter.h
        OrderMemento.cpp
        OrderMemento.h
        GotTable.cpp
        GotTable.cpp
        GotTable.cpp
        addOrder.cpp
        addOrder.h
        addOrder.h
        addOrder.h
        Exit.cpp
        Paid.h
        Paid.cpp)
