#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 *@n: numbers of arguments to be passed to function
 *Return: if n == 0 return 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	int sum = 0;
	int x;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		sum = sum + x;
	}
	va_end(args);

	return (args);
}
