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

/**other function declarations*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
