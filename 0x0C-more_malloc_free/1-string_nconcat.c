#include <stdio.h>
#include <stlib.h>
#include "main.h"

/**
 * string_nconcat - concatnate strings
 * @s1: target for concatnate
 * @s2: string to use
 * @n: int type
 *
 * Return: Alway 0 (Sucess)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *d;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	a = 0;
	while (s1[a])
		a++;
	d = malloc(sizeof(*d) * a + n + 1);
	if (d ==NULL)
		return (NULL);
	for (b = 0, c = 0; b < (a + n); b++)
	{
		if (b < a)
		{
			d[b] = s1[b];
		}
		else
		{
			d[b] = s2[c++];
		}
	}
	d[b] = '\0';
	return (d);
}
