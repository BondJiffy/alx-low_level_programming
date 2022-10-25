#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 * Return: on success 1, else -1
 */

int_putchar(char c)
{
	return (write (1, &c, 1));
}
