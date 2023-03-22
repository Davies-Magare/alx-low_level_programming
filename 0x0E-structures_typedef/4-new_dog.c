#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: A pointer to the name of the dog
 * @age: The age of the dog
 * @owner: A pointer to the owner of the dog
 *
 * Description: The function new_dog creates a new variable of
 * type dog_t with members name, age, and owner. On success, the
 * function returns a pointer to the variable in memory, Otherwise,
 * the function returns NULL.
 *
 * Return: On success, a pointer to the new type in memory,
 * Otherwise the function returns NULL
 */
dog_t *new_dog(char *name, float age, char owner)
{
	dog_t new_dog;
	dog_t *dogs = &new_dog;

	if (dogs != NULL)
	{
		dogs->name = name;
		dogs->age = age;
		dogs->owner = owner;
		return (dogs);
	}
	else
		return (NULL);
}
