#ifndef PRINT_POINTER
#define PRINT_POINTER
#include "function_pointers.h"
/**
 * print_name - puntero permite almacenar la dirección de una variable
 * @name: nombre
 * @f: paramether
 * Return: 0
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
#endif
