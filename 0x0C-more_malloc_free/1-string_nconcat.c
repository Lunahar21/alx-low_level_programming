#include <stdlib.h>
#include "main.h"
/**
 **string_nconcat -  a function that concatenates two strings
 *@s1: destination string
 *@s2: copied string to s1
 *@n: size of copied sring s2
 *
 *Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{

	}
	for (b = 0; s2[b] != '\0'; b++)
	{

	}
	if (n > b)
		n = b;
	newString[a] = malloc(((a + n) + 1))
		if (newString == NULL)
			return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		newString[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		newString[a] = s2[b];
		a++;
	}
	newString[a] = s2[b];
	return (newString);
}
