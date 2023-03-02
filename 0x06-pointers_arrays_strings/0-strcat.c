#include "main.h"

/**
 **_strcat - a function that concatenates two strings
 *
 *@dest: the destination string to be concatenates
 * @src: the sourec string to be concatnates
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a =0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a++] = src[b];
	}
	return (dest);
}
