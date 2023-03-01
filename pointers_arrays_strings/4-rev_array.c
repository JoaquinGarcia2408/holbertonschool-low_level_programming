#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: string
 * @n: number of elements of the array
 **/
void reverse_array(int *a, int n)
{
	int inter, i;

	for (i = 0; i < n / 2; i++)
	/** i empieza en 0 y va creciendo, n-i-1 es la pocicon del otroextremo **/
	{
		inter = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = inter;
	}
}
	/**
	 *se escribe a[i] en inter
	 *se sobre escribe a[n-i-1] en a[i]
	 *se sobre escribe a[n-i-1] en inter
	 **/
