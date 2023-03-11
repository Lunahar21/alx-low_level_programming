#include <sydko.h>
#include "main.h"
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return Always o (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*avoid argv*/
	printf("%d\n", argc - 1);
	return (0);
}
