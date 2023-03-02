#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letter to uppercase
 *
 * @lo: input string
 * Return: lowercase to upercase
 */

char *string_toupper(char *lo)
{
	int index = 0;
	int let = 'a' - 'A';

	for (index = 0; lo[index] != '\0'; index++)
	{
		if (lo[index] >= 'a' && lo[index] <= 'z')
		{
			lo[index] = lo[index] - let;
		}
	}
	return (let);
}
