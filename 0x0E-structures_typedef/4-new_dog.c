#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog in memory
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog structure in memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	dog_t dog;

	dog_new = malloc(sizeof(dog));
	if (dog_new == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->name = malloc(strlen(name) + 1);
	if (dog_new->name == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	else
		strcpy(dog_new->name, name);
	dog_new->age = age;
	dog_new->owner = malloc(strlen(owner) + 1);
	if (dog_new->owner == NULL)
	{
		free(dog_new->owner);
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	else
		strcpy(dog_new->owner, owner);
	return (dog_new);
}
