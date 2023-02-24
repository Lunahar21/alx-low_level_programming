#include "main.h"

/**
 * print_numbers - numbers from 0 to 9
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
