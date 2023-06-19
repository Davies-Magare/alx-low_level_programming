#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: A pointer to a dog structure in memory
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
