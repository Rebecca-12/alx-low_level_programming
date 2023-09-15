#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using a provided printing function.
* @name: The name to be printed.
* @f: A pointer to a function that prints a name.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name); /* Call the function pointer to print the name*/

	}
}
