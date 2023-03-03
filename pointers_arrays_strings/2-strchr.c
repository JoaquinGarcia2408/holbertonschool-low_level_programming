#include "main.h"
/**
 * _strchr - function that copies memory area;
 * @s: string;
 * @c: the char;
 * Return: pointer to the first occurrence of character c.
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
