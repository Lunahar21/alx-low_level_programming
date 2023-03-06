#include "main.h"
#include <stdio.h>

/**
 * *_strstr - a function that locates a substring
 *@haystack: input string
 *@needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *k;

		k = haystack;
		while (*needle == *haystack)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (k);
		haystack++;
	}
	return (0);
}
