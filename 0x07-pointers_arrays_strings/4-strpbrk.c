#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: a pointer to the byte that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}
