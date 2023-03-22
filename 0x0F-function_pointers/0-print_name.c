#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints name
 *@name: character string
 *
 *@f: function pointer which takesstring argument
 *
 */
void print_name(char *name, void (*f)(char *));
{
	f(name);
}
