#include "main.h"

/**
 *set_bit - a function that returns the value of a bit at a given index
 *@n: pointer n
 *@index: index
 *Return: change bit in index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
