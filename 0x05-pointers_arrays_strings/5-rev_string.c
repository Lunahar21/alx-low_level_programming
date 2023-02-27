#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)

{
	int i, len, temp;

	len = strlen(str1);

	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}
