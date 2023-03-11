#include "main.h"

/**
 **_strncpy - a function that copies a string
 *
 *@dest: string to be copied
 *@src: string to be compied
 *@n: input value
 * Return: string with numbers of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
		for (; index < n; index++)
		{
			dest[index] = '\0';
		}
	return (dest);
}
