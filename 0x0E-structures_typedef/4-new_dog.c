#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* Include the string.h header for strdup*/
#include "dog.h"

/**
* new_dog - Creates a new dog_t structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the new dog_t structure, or NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

/* Allocate memory for the new dog_t structure */
	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	return (NULL);

	/* Allocate memory for the name and owner strings and copy the data */
	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy)
		free(new_dog_ptr);
	return (NULL);
	}

	/* Assign the copied strings and age to the new dog_t structure */
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
