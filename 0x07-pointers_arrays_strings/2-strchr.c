#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the memory area
 * @c: constant byte
 *
 * Return: a pointer when the character is found
 */
char *_strchr(char *s, char c)
{
	int m = 0;
	
	while (s[m] != '\0')
	{
		m++;
		if (s[m] == c)
		{
			return (&s[m]);
		}
	}
	return ('\0');
}
