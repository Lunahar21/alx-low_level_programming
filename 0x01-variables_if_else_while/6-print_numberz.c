#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description print all single digit numbers starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}


