#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure type
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This is a new struct type with three
 * members: name, age and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
