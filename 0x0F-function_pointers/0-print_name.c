#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using a provided printing function.
* @name: The name to be printed.
* @f: A pointer to a function that prints a name.
*/

void print_name(char *name, void (*f)(char *)) {
	if (name != NULL && f != NULL)
	{
		f(name); /* Call the function pointer to print the name*/
	}
}

/**
* print_name_as_is - Prints a name as is.
* @name: The name of the person.
*/

void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
* print_name_uppercase - Prints a name in uppercase.
* @name: The name of the person.
*/

void print_name_uppercase(char *name)
{
	unsigned int i = 0
		while (name[i])
		{
			putchar(name[i] >= 'a' && name[i] <= 'z' ? name[i] + 'A' - 'a' : name[i]);
			i++;
		}
	printf("\n");
}
