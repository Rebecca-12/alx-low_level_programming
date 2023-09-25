#include <stdio.h>

/**
* hare_tortoise_message - Prints a message before main function is executed.
*/

void hare_tortoise_message(void) __attribute__((constructor));

void hare_tortoise_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
