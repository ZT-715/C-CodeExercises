// =============================================================================
//
// Created by zt on 09/02/2022.
//
// Exercise: declare an array of three pointers to functions and invoke the
// appropriate function based on an index value passed in as an argument.
//
// =============================================================================

#include <stdio.h>

int sum(int a, int b), divide(int a, int b), mod(int a, int b);

int main(void)
{

    int (*ftpr)(int, int) = (&sum);    // see more on 5.11 C Book

//    int array_ptr_function[3] = ;

//    array_ptr_function[1] = (*divide)(int, int);
//    array_ptr_function[2] = (*mod)(int, int);

    printf("Fist function: %i\n", (*ftpr)(1, 10));

//    printf("Second function:\n");
//    printf("Third function:\n");

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}