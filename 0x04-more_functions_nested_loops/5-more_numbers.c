#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int n, j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
