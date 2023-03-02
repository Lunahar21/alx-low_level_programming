#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letter to uppercase
 *
 * @n: input string
 * Return: lowercase to upercase
 */

char *string_toupper(char *n)
{
	int index;

	index = 0;

	while (n[index] != '\0')
	{
		if (n[index] >= 'a' && n[index] <= 'z')
		
			n[index] = n[index] - 32;
			index++;
		}
	return (n);
}
