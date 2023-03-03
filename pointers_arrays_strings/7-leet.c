#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @cad: string
 * Return: cad
 **/
char *leet(char *cad)
{
	int lec, lec2;
	char *l = "AaEeOoTtLl";
	char *n = "4433007711";

	for (lec = 0; cad[lec]; lec++)
	{
		for (lec2 = 0; l[lec2]; lec2++)
		{
			if (cad[lec] == l[lec2])
				cad[lec] = n[lec2];
		}
	}
	return (cad);
}
