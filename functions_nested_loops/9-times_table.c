#include "main.h"
/**
 *  *  *  * times_table - Prints the 9 times table.
 *   *   *   *
 *    *    *   **/
void times_table(void)
{
	int num;
	int por;
	int tot;

	for (num = 0; num <= 9; num++)
	{
		for (por = 0; por <= 9; num++)
		{
			tot = num * por;
			if ((tot / 10) == 0)
			{
				if (por != 0)
					_putchar(' ');
				_putchar(tot + '0');
				if (por == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((tot / 10) + '0');
				_putchar((tot % 10) + '0');
				if (por == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
