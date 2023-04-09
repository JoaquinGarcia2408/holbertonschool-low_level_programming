#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - gets length of string
 * @s: string input
 * Return: length of string
 **/
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	return (count);
}
