#include "main.h"
/**
 * more_numbers - check the code.
 * Return: Always 0.
 */
void more_numbers(void)
{
        char *num = "01234567891011121314";
        int letra;
	int cont;

        for (cont = 0; cont <= 10; cont++)
	{
		for (letra = 0; letra <= 19; letra++)
		{
			putchar(num[letra]);
		}	
		putchar('\n');
	}
}
