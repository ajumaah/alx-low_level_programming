#include "main.h"

/**
 * -memset - a function that fill memory with constant byte
 *  @n: first byte
 *  @b: second byte
 *  @s: third byte
 *
 *  Returns: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
