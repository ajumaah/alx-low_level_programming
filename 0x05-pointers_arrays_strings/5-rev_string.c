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

	b = a;
	a = 0;
	c = b - 1;

	while (s[a] != 0)
	{
		a++;
	}
	while (a < c)
	{
		d = s[a];
		s[a] = s[c];
		s[c] = d;
		a++;
		c--;
	}
}
