#include <stdarg.h>

/**
* sum_them_all - Returns the sum of a variable number of integers.
* @n: The number of integers to be summed.
*
* Description:
* This function takes a variable number of integer arguments and returns
* their sum. It uses the concept of variadic functions in C to handle
* a flexible number of arguments.
*
* Return: The sum of the integers.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}

