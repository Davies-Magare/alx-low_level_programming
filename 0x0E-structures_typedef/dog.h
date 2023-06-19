#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure with a dog's information
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The structure struct dog carries information
 * about a dog, including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
