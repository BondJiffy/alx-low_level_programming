#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int q;

	q = 0;
	while (s1[q] != '\0' && s2[q] != '\0')
	{
		if (s1[q] != s2[q])
		{
			return (s1[q] - s2[q]);
		}
		q++;
	}
	return (0);
}
