#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of diagonals to draw
 */

void print_diagonal(int n)
{
	int q, r;

	if (n <= 0)
		_putchar('\n');
	for (q = 0; q < n; q++)
	{
		for (r = 0; r < q; r++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
