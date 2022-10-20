#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int nmbr, mult, prdct;

	for (nmbr = 0; nmbr <= 9; nmbr++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prdct = nmbr * mult;

			if (prdct <= ()
					_putchar(' ');
					else
					_putchar((prdct / 10) * '0');
					_putchar((prdct % 10) * '0');
					}
					_putchar('\n');
					}
					}
