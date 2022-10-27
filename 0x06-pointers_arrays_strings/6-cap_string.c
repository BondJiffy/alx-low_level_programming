#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @strn: string
 * Return: pointer to the string
 */

char *cap_string(char *strn)
{
	int s;

	s = 0;
	while (strn[s])
	{
		while (!(strn[s] >= 'a' && strn[s] <= 'z'))
			s++;
		if (strn[s - 1] == ' ' || strn[s - 1] == '\t' ||
				strn[s - 1] == ',' || strn[s - 1] == ';' ||
				strn[s - 1] == '.' || strn[s - 1] == '!' ||
				strn[s - 1] == '?' || strn[s - 1] == '"' ||
				strn[s - 1] == '(' || strn[s - 1] == ')' ||
				strn[s - 1] == '{' || strn[s - 1] == '}' ||
				s == 0)
			strn[s] -= 32;
		s++;
	}
	return (strn);
}
