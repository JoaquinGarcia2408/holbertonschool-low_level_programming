#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		putchar(nums + '0');
		if (nums < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
