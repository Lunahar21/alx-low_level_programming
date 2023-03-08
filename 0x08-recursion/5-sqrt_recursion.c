#include "main.h"
/**
 *k_sqrt_recursion - a function that returns the natural square root
 *
 *@n: number that to be squered
 *@m: the sum
 *Return: squared result
 */
int k_sqrt_recursion(int n, int m)
{
		if (n == (m * m))
			return  (m);

	else if ((m * m) >= n)
		return (-1);

	else
		return (k_sqrt_recursion(n, m + 1));
}

