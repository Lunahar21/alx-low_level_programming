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
	int index, i;

	index = 0;
	while (dest[index] != '\0')
	{
		index++
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[index] = src[i];
		index++;
		i++;
	}
	return (dest);
}
