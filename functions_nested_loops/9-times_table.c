#include "main.h"
/**
 * times_table - Task9
 *
 * Return: always 0
 **/
void times_table(void)
{
		int n;
		int m;

		for (n = 0; n <= 9; n++)
		{
			for (m = 0; m <= 9; m++)
			{
				int g = n * m;

				if (m == 0)
				{
					_putchar (g + '0');
				}
				else if (g / 10 == 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (g % 10 + '0');
				}
				else
				{
					_putchar (',');
					_putchar (' ');
					_putchar (g / 10 + '0');
					_putchar (g % 10 + '0');
				}
			}
		_putchar ('\n');
		}
}
