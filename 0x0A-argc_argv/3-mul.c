#include <stdio.h>
#include <stdlib.h>
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
	int index, multi;

	multi = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multi = multi * atio(argv[index]);
	}
	printf("%d\n", multi);
	return (0);
}
