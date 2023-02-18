#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * print lower cases except e and q with putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int char = 'a';

	while (char <= 'z')
	{
		if (char == 'e' || char == 'q')
		{
			char++;
		}
		putchar(char);
		char++;
	}
	putchar('\n');
	return (0);
}
