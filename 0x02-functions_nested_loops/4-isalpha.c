#include "main.h"

/**
 * _isalphabet - checks for alphabet
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
