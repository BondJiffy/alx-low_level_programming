#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @n: pointer
 * Return: char
 */

char *string_toupper(char *n)
{
	int g;

	g = 0;
	while (n[g] != '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
		{
			n[g] = n[g] - 32;
			g++;
		}
	}
	return (n);
}
