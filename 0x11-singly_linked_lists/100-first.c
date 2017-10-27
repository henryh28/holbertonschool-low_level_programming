#include <stdio.h>

void on_start(void) __attribute__ ((constructor));


/**
 * on_start     - Setup routine to be run before main
 */

void on_start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
