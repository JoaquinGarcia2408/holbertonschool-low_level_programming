#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: variable
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
