#include "main.h"
/**
 * _strcpy - copythe string
 * @dest: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (src[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b != '\0')
	{
		dest[b] = src[b];
		b++;
	}

	b = b;
	while (b <= a)
	{
		dest[b]= '\0';
		b++;
	}
	return (dest);
}
