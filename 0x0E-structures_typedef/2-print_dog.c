#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: A pointer to the variable of type  struct dog
 *
 * Description: The print_dog function prints a variable
 * of type struct dog. If a memeber of the structure evaluates to
 * NULL, the function prints nil in place of the member. If d is NULL,
 * the function prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
