#include "function_pointers.h"


/**
 * print_name - a function that prints name
 *@name: character string
 *
 *@f: function pointer which takesstring argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *));
{
	if (name && f)
	{
		f(name);
	}
}
