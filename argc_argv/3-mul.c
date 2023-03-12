#include "main.h"
/**
 * main - function;
 * @argc: paramether;
 * @argv: paramether;
 * Return: 0;
 **/
int main(int argc, char *argv[])
{
	int res = 0, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
}
