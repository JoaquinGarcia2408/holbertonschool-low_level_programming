#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that copies memory area;
 * @s: string;
 * @c: the char;
 * Return: NULL.
 **/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
