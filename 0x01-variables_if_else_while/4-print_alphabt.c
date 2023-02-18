#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *Description print lower cases except e and q with putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
