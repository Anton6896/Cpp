cmake_minimum_required(VERSION 3.17)
project(basic)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        basic main.cpp
        Inheritance_m/Person.cpp
        Inheritance_m/Account.cpp
        Operator_overload/OperatorOverload_my.cpp
        Inheritance_m/SaveAccount.cpp

)