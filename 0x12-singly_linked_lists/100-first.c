#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * tortue - Prints a string before the
 *        main function is executed.
 */
void tortue(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
