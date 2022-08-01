#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - dog struct
 * @name: dog_name
 * @age: dog_age
 * @owner: owner
 * Return: true
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
