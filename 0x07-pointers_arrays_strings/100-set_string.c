#include "main.h"

/**
 *set_string - a fuction that sets the value of pointers to char
 *
 *@s: pointers point to pointer
 *@to: input char
 *Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
