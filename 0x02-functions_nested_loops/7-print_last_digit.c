i#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: the number whose last digit is to be printed
 * Return: last digit
 */
int print_last_digit(int x);
{
	int ld = x % 10;

	if (ld < 0)
		ld *= -1;
			_putchar(ld + '0');
	return (0);
