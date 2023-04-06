#include "main.h"
/**
 *flip_bits - a function that returns the number of bits you would need to
 *  flip to get from one number to another.
 *@n: number
 *@m: number_2
 *Return: number of bits need to flip to get one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, change = 0;

	diff = n ^ m;
	while (diff)
	{
		if (diff & 1)
			change++;
		diff = diff >> 1;
	}
	return (change);
}
