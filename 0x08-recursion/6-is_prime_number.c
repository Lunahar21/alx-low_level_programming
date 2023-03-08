#include "main.h"

/**
 *is_prime_number - a function that returns 1 if input prime else 0
 *@n: prime input number
 *
 *Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 ==) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else
		return (1);
}
