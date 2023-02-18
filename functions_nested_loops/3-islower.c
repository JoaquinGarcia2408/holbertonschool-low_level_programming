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
	int ret = 0;

	for (letra = 0; letra <= 25; letra++)
	{
		if (c == abc[letra])
		{
			ret = 1;
		}
	}
	return (ret);
}
