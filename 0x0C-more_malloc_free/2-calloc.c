#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **_calloc - a function that allocates memory for an array, using malloc
 *@nmemb: an array of character
 *@size: bytes of each character to allocated memeory
 *
 *Return: poiter to the allocated memeory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);

	call = malloc(b);

	if (call == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		call[a] = 0;
	}
	return (call);
}
