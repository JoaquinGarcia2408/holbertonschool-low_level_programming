#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character
 * Return: Always 0
 **/
int _islower(int c)
{
	char *abc = "abcdefghijklmnopqrstuvwxyz";
	int letra;

	for (letra = 0; letra <= 25; letra++)
	{
		if (c == abc[letra])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
