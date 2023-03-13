#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **_strdup - a function return newly allocated memory that contains string
 *
 *@str: pointer
 *
 * Return: character
 */
char *_strdup(char *str)
{
	char *s;
	int c, d;

	if (str == NULL)

		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;

	s = (char *) malloc((c + 1) * sizeof(char));

	if (s == NULL)

		return (NULL);

	for (d = 0; d < c; d++)
	{
		s[d] = str[d];

	s[c + 1] = '\0';
	}
	return (s);
}
