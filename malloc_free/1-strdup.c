#include "main.h"
/**
 * _strdup - variable
 * @str: cadena
 * Return: always 0
 **/
char *_strdup(char *str)
{
	char *str2;
	int t = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[t] != '\0')
		t++;
	str2 = malloc(sizeof(char) * t);

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= t; i++)
			str2[i] = str[i];
	}
	return (str2);
}
