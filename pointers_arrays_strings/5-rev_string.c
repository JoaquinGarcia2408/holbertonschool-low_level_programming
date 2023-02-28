#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 *Return: Always 0.
 **/
void rev_string(char *s)
{
	int tam, cont;
	char intercambio;

	for (tam = 0; s[tam] != '\0'; tam++)/** me da  el tamaño de la cadena **/
		;
	for (cont = 0; cont < tam / 2; cont++)
		/** intercamcia los caracteres s[cont] y s[tam-1-i] **/
	{
		intercambio = s[cont];
		s[cont] = s[tam - 1 - cont];
		s[tam - 1 - cont] = intercambio;
	}
}
