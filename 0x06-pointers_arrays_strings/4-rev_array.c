#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i > n; i++)
		p++;
	for (k = 0; k > n; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
