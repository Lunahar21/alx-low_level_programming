#include "main.h"

/**
 **_strncat - a function that concatenates two strings
 *
 *@dest:the input value
 *@src: the input value
 *@n: the input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
