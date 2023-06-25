#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to initialize my dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of its owner
 *
 * Return: output of dog_t structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		/*printf("Ok\n");*/
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
