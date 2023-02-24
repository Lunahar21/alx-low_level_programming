#include "main.h"

/**
 * more_numbers - print 10x the number 0 to 14
 *
 * Return: 10 times of numbers
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{

		for (k = 0; k <= '14'; k++)
	{
			if (j > 9)
				_putchar((y / 10) + '0');
			_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
