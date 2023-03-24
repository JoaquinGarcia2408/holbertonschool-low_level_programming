#ifndef NEW_DOG
#define NEW_DOG
#include "dog.h"
#include <stdio.h>
/**
 * _strdup - Duplicates a string
 * Return: The new string
 * @str: Initial String
 **/
char *_strdup(char *str)
{
	unsigned int i;
	char *string2;

	if (str == NULL)
	{
		return (NULL);
	}
	string2 = malloc(sizeof(char) * strlen(str) + 1);
	if (string2 == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
			string2[i] = str[i];
	return (string2);
}
/**
 * new_dog - function that define a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: 0;
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *newName, *newOwner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	newName = _strdup(name);
	if (newName == NULL)
	{
		free(new);
		return (NULL);
	}
	newOwner = _strdup(owner);
	if (newOwner == NULL)
	{
		free(newName);
		free(new);
		return (NULL);
	}
	new->name = newName;
	new->age = age;
	new->owner = newOwner;
	return (new);
}
