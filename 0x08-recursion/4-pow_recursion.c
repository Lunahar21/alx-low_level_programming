#include "main.h"

/**
 *_pow_recursion - a function that returns the value of x raised to y
 *
 *@x: input
 *@y: input
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)

		return (x);

	else if (n % 2 == 0)

		return (_pow_recursion(_pow_recursion(x, y / 2), 2));
	else
		return (x * _pow_recursion(x, y - 1));
}
