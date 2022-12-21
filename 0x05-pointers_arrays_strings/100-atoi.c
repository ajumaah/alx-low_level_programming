#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 *
 * Return: converted string
 */

int _atoi(char *s)
{
	int a, b, c;
	short d;

	a = b = c = d = 0;
	b = -1;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
			b *= -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			c = c * 10;
			c = c -(s[a] - '0');
			d = 1;
		}
		else if (d == 1)
			break;
		a++;
	}
	c = c * b;
	return (c);
}
