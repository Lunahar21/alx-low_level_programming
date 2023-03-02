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
	i = 0;
	while (src[i] != '\0')
	{
		dest[index] = src[i];
		index++;
		i++;
	}
	dest[index] != '\0';
	return (dest);
}
