#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - structure for defining a dog
 * @name: 1st descriptor
 * @age: 2nd descriptor
 * @owner: final descriptor
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * typedef struct dog_t - 2nd structure for defining dogs
 * @name: 1st descriptor
 * @age: 2nd descriptor
 * @owner: 3rd descriptor
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
