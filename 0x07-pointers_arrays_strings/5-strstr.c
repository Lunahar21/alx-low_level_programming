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
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *m = needle


		while (*k == *m && *m != '\0')
		{
			k++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
