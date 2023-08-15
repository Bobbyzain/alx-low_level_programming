#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a structure for defining a dog
 * @name: 1st descriptor for its name
 * @age: 2nd descriptor for its age
 * @owner: 3rrd descriptor for its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	/* dog - a structure */
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
