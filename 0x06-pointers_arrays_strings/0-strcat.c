#include "main.h"

/**
 * _strcat - Concatenation of two strings
 * @dest: copy to
 * @src: copy from
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] != '\0')
	{
		dest[b] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
return (dest);
}