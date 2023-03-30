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
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(_strlen(name) + 1);
	if (newdog->name != NULL)
		_strcpy(newdog->name, name);
	else
	{
		free(newdog->name);
		free(newdog);
	}
	newdog->age = age;
	newdog->owner = malloc(_strlen(owner) + 1);
	if (newdog->owner != NULL)
		_strcpy(newdog->owner, owner);
	else
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
	}
	return (newdog);
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

/**
 * _strlen - finds the length of a string
 * @s: A pointer to a string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
