#include "main.h"
/**
* *leet - a function that encodes a string into 1337
 *
 *@sr: input string
 *
 * Return: string changed to 1337
 */

char *leet(char *sr)
{
	int i, j;
	char *ltr = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ltr[j] != '\0'; j++)
		{
			if (str[i] == ltr[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}

	return (str);
}
