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
	int power = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	power *= _pow_recursion(x, y - 1);

	return (power);
}
