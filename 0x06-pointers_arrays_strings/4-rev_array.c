#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array
 *
 *@a: an integer to be reversed
 *@n: number of element array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, last;

	last = n - 1;
	for (j = 0; j < n / 2; j++)
	{
		int start, end;

		start = a[j];
		end = a[last];
		a[j] = end;
		a[last] = start;
		last--;
	}
}
