#include "main.h"
/**
 * str_concat - funcion
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: always 0
 **/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int t1 = 0, t2 = 0, tt = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[t1] != '\0')
	{
		t1++;
	}
	while (s2[t2] != '\0')
	{
		t2++;
	}
	tt = t2 + t1;
	p = malloc(sizeof(char) * tt + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	t1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
		t1++;
	}
	for (i = 0; s2[i]; i++)
	{
		p[t1++] = s2[i];
	}
	return (p);
}
