#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: integer
 */

void print_number(int n)
{
	int i = 0;

	while (i >= 1)
	{
		if ((i % 10) == 0)
			_putchar(i + '0');
		_putchar('\n');
	}
	i++;
}
