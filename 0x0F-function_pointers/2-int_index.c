#include <stddef.h>

/**
* array_iterator - Executes a function on each element of an array.
* @array: The array to be processed.
* @size: The number of elements in the array.
* @action: A pointer to the function to be applied to each element.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;
		for (i = 0; i < size; i++)

		action(array[i]);
		/* Call the action function on each element*/
		}
	}
}
