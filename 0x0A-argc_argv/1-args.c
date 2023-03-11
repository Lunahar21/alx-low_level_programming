#include <stdio.h>
#include "main.h"
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
