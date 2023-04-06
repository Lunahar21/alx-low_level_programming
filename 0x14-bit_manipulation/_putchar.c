#include <unistd.h>
/**
 *_putchar - a function that display character in stdout
 *@c: character
 *Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
