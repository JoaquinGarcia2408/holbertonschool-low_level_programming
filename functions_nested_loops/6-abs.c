#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @num: parameter
 * Return: Always 0
 **/
int _abs(int num)
{
	int ret = 0;

	if (num >= 0)
	{
		ret = num;
	}
	else if (num < 0)
	{
		ret = (num * -1);
	}
	return (ret);
}
