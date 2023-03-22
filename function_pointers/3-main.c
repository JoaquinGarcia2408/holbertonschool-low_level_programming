#include "3-calc.h"
/**
 * main - funcion
 * @argc: number of arguments
 * @argv: arrat of arguments
 **/
int main(int argc, char *argv[])
{
	int a, b;
	int (*aux)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	aux = get_op_func(argv[2]);
	b = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", aux(a, b));
	return (0);
}
