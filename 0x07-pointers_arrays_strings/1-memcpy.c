#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 *
 *@dest: the memory area
 *@src: memory area
 *@n: byte of memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
