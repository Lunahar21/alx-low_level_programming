#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 *@s: a pointer that poits to char
 *@b: a value that stores in memory address
 *@n: the size bye  of the b variable
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
