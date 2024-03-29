#ifndef DOG_H
#define DOG_H

/**
* struct dog - Represents information
* about a dog including its name, age, and owner.
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define a new name dog_t for the struct dog type */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
