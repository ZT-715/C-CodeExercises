// =============================================================================
//
// Created by zt on 09/02/2022.
//
// Exercise: declare an array of three pointers to functions and invoke the
// appropriate function based on an index value passed in as an argument.
//
// =============================================================================

#include <stdio.h>

float sum(float a, float b), divide(float a, float b), multiply(float a, float b);



int main(void)
{
    typedef float (*pointer_to_function)(float, float);    // see more on 5.11 C Book

    pointer_to_function function_array[3];

    function_array[0] = (&sum);
    function_array[1] = (&divide);
    function_array[2] = (&multiply);

    printf("Fist function: %.2f\n",   (*function_array[0])(1.1, 10.0));   // sum

    printf("Second function: %.2f\n", (*function_array[1])(10.0, 4.0));   // divide

    printf("Third function: %0.2f\n", (*function_array[2])(10.5, 2.0));   // multiply

    return 0;
}

float sum(float a, float b)
{
    return a+b;
}

float  divide(float a, float b)
{
    return a/b;
}

float multiply(float a, float b)
{
    return a*b;
}