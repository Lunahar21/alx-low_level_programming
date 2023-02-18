#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description print the lower case alphabets in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
	int chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		chr--;
	}
	putchar("\n");
	return (0);
}

