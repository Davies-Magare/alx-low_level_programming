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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *dogs = &new_dog;
	char *namecpy;
	char *ownercpy;

	namecpy = malloc(20);
	ownercpy = malloc(20);
	if (namecpy != NULL)
		_strcpy(namecpy, name);
	if (ownercpy != NULL)
		_strcpy(ownercpy, owner);
	if (dogs != NULL)
	{
		dogs->name = namecpy;
		dogs->age = age;
		dogs->owner = ownercpy;
		return (dogs);
	}
	else
		return (NULL);
}

/**
 * _strcpy - copies a string to a memory location
 * @dest: The location into which to copy the string
 * @src: The string to be copied
 *
 * Return: A pointer to the copied string in memory.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
