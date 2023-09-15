#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return i;
			}

		}
	}

		return -1;
}
