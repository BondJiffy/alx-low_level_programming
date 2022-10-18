#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10x
 */
void print_alphabet_x10(void)
{
	int ten;
	char aa;

	for (ten = 0; ten <= 9; ten++)
	{
		for (aa = 'a'; aa <= 'z'; aa++)
			_putchar(aa);
		_putchar('\n');
	}
}
