#include "main.h"

/**
 * _isdigit - Checks if 0 to 9 is found
 * @c: digits to check from
 * Return: 1 if found, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
