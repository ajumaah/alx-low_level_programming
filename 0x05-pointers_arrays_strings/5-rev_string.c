#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int a, b, c, d;

	a = 0;
	b = a;
	c = a -1;

	while (s[a] != 0)
	{
		a++;
	}
	while (a < d)
	{
		d = s[a];
		s[a] = s[d];
		s[d] = c;
		a++;
		d--;
	}
}
