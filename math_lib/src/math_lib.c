#include "libs/math_lib.h"

int multiply_int(int a, int b)
{
	return a * b;
}

unsigned fibonacci_series(unsigned number)
{
    if (number <= 1)
        return number;

    return fibonacci_series(number - 1) + fibonacci_series(number - 2);
}