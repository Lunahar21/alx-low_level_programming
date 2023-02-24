#include "main.h"

/**
 *print_line - that draws a straight line
 *
 *@n:the number of times the character _ should be printed
 *Return: void
 */

void print_line(int n)
{
		int j;

		if (n <= 0)
		{
		_putchar('\n');
		}
		else
		{

		for (j = 0; j <= n; j++)
		{
			_putchar(_);
		}
		_putchar('\n');
		}
}
