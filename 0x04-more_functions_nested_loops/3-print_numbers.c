#include "main.h"

/**
 * print _numbers - numbers from 0 to 9
 *
 * Retuen: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0' && c <= '9')
	{
	putchar(c);
	}
	_putchar('\n');
}
