#include "main.h"

/**
 * rev_string - a function that reverse a string followed by a new line.
 * @s: Input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int lenght = 0, l = 0;
	char a;

	while (s[lenght] != '\0')
		lenght++;

	while (l < lenght--)
	{
		a = s[l];
		s[l++] = s[lenght];
		s[lenght] = a;
	}
}
