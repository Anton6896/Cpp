cmake_minimum_required(VERSION 3.17)
project(basic)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        basic
        main.cpp

        Operator_overload/OperatorOverload_my.cpp

        Inheritance_m/Person.cpp
        Inheritance_m/Account.cpp
        Inheritance_m/SaveAccount.cpp
        Inheritance_m/Base_1.cpp Inheritance_m/Base_1.h
        Inheritance_m/Derived_1.cpp Inheritance_m/Derived_1.h
        Inheritance_m/Acc_2.cpp Inheritance_m/Acc_2.h
        Inheritance_m/Save_Acc_2.cpp Inheritance_m/Save_Acc_2.h

        polymorphism_my/Base_pol.cpp polymorphism_my/Base_pol.h
        polymorphism_my/Derived_pol.cpp polymorphism_my/Derived_pol.h
        polymorphism_my/Derived_pol_2.cpp polymorphism_my/Derived_pol_2.h)