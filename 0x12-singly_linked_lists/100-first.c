#include <stdio.h>
/**
 *cleanupFun - function that print something before the main function excuted
 */
void cleaupFun(void) __attribute__ ((constructor));

void cleanupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
