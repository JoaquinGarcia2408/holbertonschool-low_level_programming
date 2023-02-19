#include "main.h"
/**
 *  *  * jack_bauer - Prints every minute and hour from 00:00 to 23:59
 *   *   * @: The time.
 *    *     * Return: Value of the last digit.
 *    **/
void jack_bauer(void)
{
	int min;
	int hor;

	for (hor = 0; hor <= 23; hor++)
	{
	for (min = 0; min <= 59; min++)
	{
		_putchar((hor / 10) + '0');
		_putchar((hor % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
	}
	}
}
