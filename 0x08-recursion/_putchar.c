#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: The character to print
 * Return: on success 1, else -1
 */

int_putchar(char c)
{
	return (write (1, &c, 1));
}
