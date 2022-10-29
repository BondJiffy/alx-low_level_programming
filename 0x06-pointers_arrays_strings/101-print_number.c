#include "main.h"

/**
 * print_number - prints integer
 * @x:input integer
 */

void print_number(int x)
{
	unsigned int i = x;

	if (x < = 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
