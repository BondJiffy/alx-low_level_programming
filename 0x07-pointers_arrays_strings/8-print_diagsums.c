#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int indx, sum1 = 0, sum2 = 0;

	for (indx = 0; indx < size; indx++)
	{
		sum1 += a[indx];
		a += size;
	}

	a -= size;

	for (indx = 0; indx < size; indx++)
	{
		sum2 += a[indx];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
