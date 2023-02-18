#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Description printing all single digit numers starting from 0
 *
 *Return: Always 0
 */
int mani(void)
{
	int a;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
