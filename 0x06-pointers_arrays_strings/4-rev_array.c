#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of elements
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0; m < n; m++)
	{
		n--;
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
