# Format Print

Realize your dream of `prunsigned long longf`.

## Introduction

It is quite common to notice that there is an `int` in `printf`, which implies it should be used specifically to print an `int`. Consequently, it is **natural** that other functions, such as `prlongf`, `prunsigned long longf` be declared and implied. However, it was not. This repo realized such functions.

Additionally, you can use your own class name or typename to declare a new `pr**f` function.

## Usage

1. Fundamental types
    Directly use the functions as you wish.
    ```cpp
    FormatPrint::printf(42);
    FormatPrint::prlongf(10000L);
    FormatPrint::prunsigned long longf(1000000uLL);
    FormatPrint::prsigned long doublef(123.456);
    ```

2. Class or Types you declared in your program
    Once your object can be cast to `const char*`, the repo is still useful. First use `PRINT_TYPE` to make preparations.

    ```cpp
    PRINT_TYPE(SomeClassType)
    ```

    where `SomeClassType` is your class name or typename. Then, just print it like we did.

    ```cpp
    SomeClassType a;
    FormatPrint::prSomeClassTypef(a);
    ```

## Install

> Download, include, compile, run.

## Notice

Use C++ instead of C because I used `std::cout`.