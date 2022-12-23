#include "main.h"

/**
 * _strncat - concantinate two strings
 * @dest: destinatin value
 * @src: the source value
 * @n: limit
 *
 * Return: pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, k = 0;

	while (dest[dlen++])
	{
		k++;
	}
	for (deln = 0; src[dlen] && dlen < n; dlen++)
	{
		dest[k++] = src[dlen];
	}
	return (dest);
}
