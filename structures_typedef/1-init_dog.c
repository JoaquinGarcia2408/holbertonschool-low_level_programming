#ifndef INIT_DOG
#define INIT_DOG
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a vaiable;
 * @d: struct;
 * @name: the name;
 * @age: the age;
 * @owner: the owner;
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
