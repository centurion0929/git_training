#include "libs/math_lib.h"

int sum_int(int a, int b)
{
	return a + b;
}

unsigned factorial(unsigned number)
{
	if (number == 0 || number == 1)
		return 1;

	return number * factorial(number - 1);
}