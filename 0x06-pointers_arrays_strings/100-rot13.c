#include "main.h"
/**
 * *rot13 -  a function that encodes a string using rot13.
 *
 * @sr: input string
 *
 * Return: string
 */

char *rot13(char *sr)
{
	int index, count;

	char sub[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mix[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; sr[index] != '\0'; ++index)
	{
		for (count = 0; sub[count] != '\0'; count++)
		{
			if (sr[index] == sub[count])
			{
				sr[index] = mix[count];
				break;
			}
		}
	}
	sr[index] = '\0';
	return (sr);
}

