#include <stdio.h>

/**
 * premain - run before main
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n%s",
		"I bore my house upon my back!\n");
}
