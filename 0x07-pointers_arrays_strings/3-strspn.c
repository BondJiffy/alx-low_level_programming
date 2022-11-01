#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int x = 0;
	int v = 0;

	while (s[x] != '\0')
	{
		while (accept[v] != '\0')
		{
			if (accept[v] == s[x])
			{
				count++;
			}
			v++;
		}
		v = 0;
		x++;
		if (s[x] == ' ')
		{
			break;
		}
	}
	return (count);
}
