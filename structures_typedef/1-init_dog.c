#ifndef INIT_DOG
#define INIT_DOG
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - variable
 * @d: dog
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 * Return: void
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
