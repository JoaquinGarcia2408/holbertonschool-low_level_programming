#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @pal: changes all lowercase
 * Return: true
 **/
char *string_toupper(char *pal)
{
	int lect = 0;

	while (pal[lect])
	{
		if (pal[lect] >= 97 && pal[lect] <= 122)
		{
			pal[lect] = pal[lect] - 32;
		}
		lect++;
	}
	return (pal);
}
