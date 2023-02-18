#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description print all numbers of bas 16 in lower cases
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		pustchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
