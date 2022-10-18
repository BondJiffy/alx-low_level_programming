#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes the character c to standard out
 * @c: the character to print
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
