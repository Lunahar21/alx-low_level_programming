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

	for (index = 0; n[index] != '\0'; index++)
	{
		if (n[index] >= 'a' && n[index] <= 'z')
		
			n[index] -= 32;
		}
	return (n);
}
