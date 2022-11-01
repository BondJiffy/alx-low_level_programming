#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		if (x <= s)
			printf("%02x", c[l * 10 + x]);
		else
			printf("  ");
		if (x % 2)
			putchar(' ');
	}
	for (y = 0; y <= s; y++)
	{
		if (c[l * 10 + y] > 31 && c[l * 10 + y] < 127)
			putchar(c[l * 10 + y]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m;

	for (m = 0; m <= (size - 1) / 10 && size; m++)
	{
		printf("%08x: ", m * 10);
		if (m < size / 10)
		{
			print_line(b, 9, m);
		}
		else
		{
			print_line(b, size % 10 - 1, m);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
>>>>>>> adada611b0bf7a0d2912b6096328065ca3edd4dc
}
