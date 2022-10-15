#include <stdio.h>
/**
 * main -program entry point
 * Return: 0 if error, non zero if no error
 */
int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
