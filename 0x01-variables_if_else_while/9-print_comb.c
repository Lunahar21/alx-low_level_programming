#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description print all possible combination of a single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(' ; ');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
