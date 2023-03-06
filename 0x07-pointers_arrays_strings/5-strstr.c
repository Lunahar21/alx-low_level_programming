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
		char *k = haystack;
		char *n = needle;


		while (*k == *n && *n != '\0')
		{
			k++;
			n+;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;

	}
	return (0);
}
