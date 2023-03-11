#include <stdio.h>
#include "main.h"

/**
 *main - a program that prints all arguments it receives
 *@argc: number of arguments (count)
 *@argv: array argument vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{

		printf("%s\n", argv[count]);
	}
	return (0);
}
