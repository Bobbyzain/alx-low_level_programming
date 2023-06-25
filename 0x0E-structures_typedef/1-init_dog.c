#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize my dog structure
 * @d: Pointer to my dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of its owner
 *
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*d = malloc(sizeof(struct dog));*/
	if (d == NULL)
	{
		printf("Ok\n");
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
