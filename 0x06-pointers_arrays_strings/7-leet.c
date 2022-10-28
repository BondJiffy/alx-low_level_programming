#include "main.h"

/**
 * leet - encodes a string into 1337
 * @i: input
 * Return: i
 */

char *leet(char *i)
{
	int v, w;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (v = 0; i[v] != '\0'; v++)
	{
		for (w = 0; w < 10; w++)
		{
			if (i[v] == s1[w])
			{
				i[v] = s2[w];
			}
		}
	}
	return (i);
}
