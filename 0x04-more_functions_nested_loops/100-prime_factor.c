#include <stdio.h>

/**
 * main - prints prime factors
 * Return: Always 0
 */

int main(void)
{
	int c;
	long int n = 612852475143;

		for (c = 2; n > 1; c++)
		{
			while ((n % c) == 0)
			{
				printf("%d", c);
				n = n / c;
			}
		}
}
