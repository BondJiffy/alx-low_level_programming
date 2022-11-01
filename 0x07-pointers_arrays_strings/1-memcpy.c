#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area
 * @src: constant byte
 * @n: bytes from memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d = 0;

	while (d < n)
	{
		dest[d] = src[d];
		d++;
	}
	return (dest);

}
