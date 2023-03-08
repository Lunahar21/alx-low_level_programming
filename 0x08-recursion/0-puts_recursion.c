#include "main.h"

/**
 *_puts_recursion - a function that prints a string
 *
 *@s: a string to be printed
 *
 *Return: string
 */
void _puts_recursion(char *s)
{
	if (*s)
		return (s);
	{
	_pustchar(*s);
	}
	_putchar('\n)'
}
