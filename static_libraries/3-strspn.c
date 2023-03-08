#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring;
 * @s: the string;
 * @accept: the bytes;
 * Return: 0;
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p && *p != *s)
		{
			p++;
		}
		if (*p == '\0')
		{
			return (result);
		}
		result++;
		s++;
	}
	return (result);
}
