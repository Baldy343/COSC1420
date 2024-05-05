#include <stdio.h>
#include <stdlib.h>

//Write a program that calculates the product of a series of integers that are passed to function product using a variable-length argument list.
//Test your function with several calls, each with a different number of arguments.

int product(int n, ...)
{
    int result = 1;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++)
    {
        result *= va_arg(args, int);
    }
    va_end(args);
    return result;
}

