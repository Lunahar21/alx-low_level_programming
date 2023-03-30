#include <stdio.h>
/**
 *cleanup_Fun - function that print something before the main function excuted
 */
void cleaup_Fun(void) __attribute__ ((constructor));

void cleanup_Fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
