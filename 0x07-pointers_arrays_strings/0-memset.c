#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to the memory area
 * @n: bytes of memory
 * @b: constant byte
 *
 * Return: the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		s[z] = b;
		z++;
	}
	return (s);



}
