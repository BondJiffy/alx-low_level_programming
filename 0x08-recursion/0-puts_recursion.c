#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - Thsi this the recusive function
* @s: This is a pointer that recieves a string
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
