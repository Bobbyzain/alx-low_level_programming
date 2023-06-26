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
	int i, j, x;

	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;
	if (name == NULL || owner == NULL)
		return (NULL);
	/* Allocating Memory for new dog structure */
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = malloc((i + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc((j + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (x = 0; x < i; x++)
		d->name[x] = name[x];
	for (x = 0; x < j; x++)
		d->owner[x] = owner[x];
	d->age = age;
	d->name = name;
	d->owner = owner;
	return (d);
}
