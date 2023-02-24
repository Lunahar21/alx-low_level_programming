#include "main.h"

/**
 * more_numbers - print 10 times the numbers 
 *
 * Return: void
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 10; j++)
	{

		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
	
				 _putchar('1');
			_putchar((k % 10 + '0');
	}
	_putchar('\n');
	}
}
