#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
		_putchar(x + '0');
	x++;

	_putchar('\n');
}
