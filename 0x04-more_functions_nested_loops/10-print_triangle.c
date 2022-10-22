#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int w, t;

	if (size > 0)
	{
		for (w = 1; w <= size; w++)
		{
			for (t = size - w; t > 0; t--)
			_putchar(' ');
		for (t = 0; t < w; t++)
			_putchar('#');
		if (w == size)
			continue;
		_putchar('\n');
	}
}
_putchar('\n');
}
