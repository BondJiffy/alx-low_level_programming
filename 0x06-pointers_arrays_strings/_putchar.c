#include <unistd.h>
#include "main.h"                       

/**
 * _putchar - Writes the character c to standard output
 * @c: the character to be printed
 * Return: 1 on success, else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
