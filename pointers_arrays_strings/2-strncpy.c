#include "main.h"
/**
 * _strncpy - function that copies a string up to n
 * @dest: string one
 * @src: string two
 * @n: limit caracters
 * Return: o
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int cont = 0, lect;

        while (src[cont] != '\0' && cont < n)
        {
                cont++;
        }
        for (lect = 0; lect <= cont; lect++)
        {
                dest[lect] = src[lect];
        }
        dest[lect] = '\0';
        return (dest);
}
