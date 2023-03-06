#include "main.h"

/**
 *print_chessboard - a function that prints the chessboard
 *
 *@a: name of array
 *
 *Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (a[i][7])
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\0');
		i++;
	}
}
