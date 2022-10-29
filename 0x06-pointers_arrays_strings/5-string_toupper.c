#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @n: pointer
 * Return: changed string
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
			i++;
	}
	return (n);
}
