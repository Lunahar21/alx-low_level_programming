#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments (count)
 *@argv: array argument vector
 *
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{

		printf("%d\n", argv[count]);
	}
	return (0);
}
