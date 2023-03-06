#include "main.h"

/**
 * *_strstr - a function that locates a substring
 *@haystack: input string
 *@needle: input string
 *
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *hystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *p = needle;

		while (*k == *p && *p != '\0')
		{
			k++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
