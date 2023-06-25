#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to initialize my dog structure
 * @d: Pointer to my dog structure
 *
 * Return: None
 */

void print_dog(struct dog *d)
{
	/*d = malloc(sizeof(struct dog));*/
	if (d == NULL)
	{
		exit(1);
	}
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age >= 0)
		printf("Age: %f\n", (*d).age);
	else
		printf("age: (nil)\n");
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
