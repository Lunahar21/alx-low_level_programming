#include "main.h"

/**
 * more_numbers - print 10 times the numbers since 0 up to 14
 *
 * Return: no 
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 10; j++)
	{

	for (k = 0; k <= 14; k++)
	{
	if (k >= 10)
	{
	 _putchar('1');
	}
	_putchar((k % 10 + '0');
	}
	_putchar('\n');
	}
}
