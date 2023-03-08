#include "main.h"

/**
 *is_prime_number - a function that returns 1 if input prime else 0
 *@prime: prime input number
 *
 *Return: 1 if prime number else 0
 */
int is_prime_number(int prime)
{
	if (prime <= 1)
		return (0);
	if (prime == 2)
		return (1);
	if ((prime % 2 == 0) || (prime % 3 == 0) || (prime % 5 == 0))
		return (0);
	else
		return (1);
}
