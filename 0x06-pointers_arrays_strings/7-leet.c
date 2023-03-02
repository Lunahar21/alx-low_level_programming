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
	int index, j;
	char lower[] = {'a', 'e', '0', 't', 'l', '\0'};
	char numbs[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; sr[index] != '\0'; index++)
	{
		for (j = 0; j < 5; j++)
		{
			if (sr[index] == lower[j] || sr[indx] == upper[j])
			{
				sr[index] = numbs[j];
			}
		}
	}
	return (sr);
}
