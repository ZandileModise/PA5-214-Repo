cmake_minimum_required(VERSION 3.26)
project(COS214Project)

set(CMAKE_CXX_STANDARD 11)

add_executable(COS214Project main.cpp
        Table.cpp
        Table.h
        Restaurant.cpp
        Restaurant.h
        Customer.cpp
        Customer.h
        Order.cpp
        Order.h
        PizzaOrder.h
        PizzaOrder.cpp
        PastaOrder.cpp
        PastaOrder.h
        OrderFactory.cpp
        OrderFactory.h
        TotalOrders.cpp
        TotalOrders.h
        RestaurantMomento.cpp
        RestaurantMomento.h)
