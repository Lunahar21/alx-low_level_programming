#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 *@s: number of bytes in the initial segment
 *@accept: added byte to s
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (r = 0; accept[i]; i++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
		elese if (accept[r + 1] == '\0')
			return (n);
	}
	s++;
}
return (n);
}
