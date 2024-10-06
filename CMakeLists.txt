cmake_minimum_required(VERSION 3.29)
project(C_task1 C)

set(CMAKE_C_STANDARD 11)

add_executable(C_task1 main.c
        Minimum.c
        FahrenheitToCelsius.c
        AddingNumber.c
        OddEven.c
        Series.c
        Series1.c
        Factorial.c
        Fibonacci.c
        functionMinimum.c
        FunctionFahrenheitToC.c
        FunctionAdd.c
        FunctionOddEven.c
        FunctionOddSerise.c
        FunctionEvenSeries.c
        FunctionFactorial.c
        FunctionFibonacci.c
        Arraymin.c
        ArrayFahrenheitToCelsius.c
        ArrayAdding.c
        ArrayEvenOdd.c
        ArrayOddSeries.c)
add_executable(Minimum Minimum.c)
add_executable(FahrenheitToCelsius FahrenheitToCelsius.c)
add_executable(AddingNumber AddingNumber.c)
add_executable(OddEven OddEven.c)
add_executable(Series Series.c)
add_executable(Series1 Series1.c)
add_executable(Factorial Factorial.c)
add_executable(Fibonacci Fibonacci.c)
add_executable(functionMinimum functionMinimum.c)
add_executable(FunctionFahrenheitToC FunctionFahrenheitToC.c)
add_executable(FunctionOddEven FunctionOddEven.c)
add_executable(FunctionOddSerise FunctionOddSerise.c)
add_executable(FunctionEvenSeries FunctionEvenSeries.c)
add_executable(FunctionFactorial FunctionFactorial.c)
add_executable(FunctionFibonacci FunctionFibonacci.c)
add_executable(Arraymin Arraymin.c)
add_executable(ArrayFahrenheitToCelsius ArrayFahrenheitToCelsius.c)
add_executable(ArrayAdding ArrayAdding.c)
add_executable(ArrayEvenOdd ArrayEvenOdd.c)
add_executable(ArrayOddSeries ArrayOddSeries.c)



