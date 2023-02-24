#include "main.h"

/**
 * more_numbers - print 10x the number 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int j, k;

	for (j = 1; j <= '10'; j++)
	{

		for (k = 0; k <= '14'; k++)
	{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}
