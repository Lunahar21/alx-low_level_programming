#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description print all possible combination of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c = '0';
	int i;

	while (c <= '9')
	{
		i = c + 1;
		while (i <= '9')
		{
		putchar(c);
		putchar(i);
	if (c != '8' || (c == '8' && i != '9'))
	{
	putchar(',');
	putchar(' ');
	}
	i++;
	}
	c++;
	}
	return (0);
}
