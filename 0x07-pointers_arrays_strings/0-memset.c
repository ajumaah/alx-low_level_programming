#include "main.h"

/**
 * _memset - a function that fill memory with constant byte
 *  @n: first byte to fill
 *  @b: second byte that is constant
 *  @s: third byte pointing area to fill
 *
 *  Return: s a pointer to memory area
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
