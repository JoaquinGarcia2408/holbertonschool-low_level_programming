#include "main.h"
/**
 * _isalpha - checks for a letter
 * @c: character
 * Return: Always 0
 **/
int _isalpha(int c)
{
	char abc;
	int ret = 0;
	char ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (c == abc)
		{
			ret = 1;
		}
	}
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	{
		if (c == ABC)
		{
			ret = 1;
		}
	}
	return (ret);
}
