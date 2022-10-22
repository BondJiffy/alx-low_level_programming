#include "main.h"

/**
 * print_line - draws straight lines
 * @n: the number of '_' to be drawn
 */

void print_line(int n)
{
	int q;

	if (n > 0)
	{
		for (q = 0; q < n; q++)
			_putchar('_');
	}
	_putchar('\n');
}
