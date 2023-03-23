#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - a function that prints strings, followed by a new line
 *
 *@separator: the string to be printed between the strings
 *@n: number of arguments passed
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
		va_end(args);
}
