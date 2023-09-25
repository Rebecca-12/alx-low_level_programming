#include <stdio.h>

void hare_tortoise_message(void) __attribute__((constructor));

/**
* hare_tortoise_message - Prints a message before
* the main function is executed.
*/

void hare_tortoise_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
