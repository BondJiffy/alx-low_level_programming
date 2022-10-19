#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n:sign to be printed
 * Return: +1 if n is greater than zero, 0 if is zero otherwise -1
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
	_putchar('\n');
	return (1);
	}
	if (n == 0)
	{
		_putchar('0');
	_putchar('\n');
	return (0);
	}
	else
	{
		_putchar('-');
	_putchar('\n');
	return (-1);
	}
}
