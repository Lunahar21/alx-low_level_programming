#include "main.h"

/**
 **_strcat - a function that concatenates two strings
 *
 *@dest: the destination string to be concatenates
 * @src: the sourec string to be concatnates
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

<<<<<<< HEAD
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
=======
	for (a =0; dest[a] != '\0'; a++)
		;

>>>>>>> ce08e5a82030cdd049b8b470ce80a47c5e0ca2db
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a++] = src[b];
	}
	return (dest);
}
