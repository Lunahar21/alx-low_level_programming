#include "main.h"
/**
 *k_sqrt_recursion - a function that returns the natural square root
 *
 *@p: number that equals to n of before function
 *@m: the sum
 *Return: the result
 */
int k_sqrt_recursion(int p, int m)
{
		if (n == (m * m))
			return  (m);

	else if (m == p / 2)
		return (-1);

	else
		return (k_sqrt_recursion(p, m + 1));
}
/**
 *_sqrt_recursion - the first function
 *@n: input value
 *
 *Return: squared result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	return (k_sqrt_recursion(n, 0));
}
