#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - program that multiplies two numbers
 *@argc: the argument count
 *@argv: the argument vector
 *
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int a, b, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	multi = a * b;
	}
	printf("%d\n", multi);
	return (0);
}
