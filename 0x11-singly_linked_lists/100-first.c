#include <stdio.h>

/**
 * on_start     - Setup routine to be run before main
 */

void on_start(void) __attribute__ ((constructor));


void on_start(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
