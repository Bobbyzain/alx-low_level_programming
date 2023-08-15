#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to a struct dog variable
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
