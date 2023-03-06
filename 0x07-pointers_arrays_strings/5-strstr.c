#include "main.h"
#include <stdio.h>

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
<<<<<<< HEAD
		char *k = haystack;
		char *m = needle


		while (*k == *m && *m != '\0')
=======
		char *kin;

		kin = haystack;
		while (*needle == *haystack)
>>>>>>> 91eef4091f8d913e0f73316a5215050494b09db8
		{
			k++;
			m++;
		}
<<<<<<< HEAD
		if (*m == '\0')
			return (haystack);
=======
		if (*needle == '\0')
			return (kin);
		haystack++;
>>>>>>> 91eef4091f8d913e0f73316a5215050494b09db8
	}
	return (0);
}
