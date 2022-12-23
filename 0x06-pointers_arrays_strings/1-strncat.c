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

	while ((dest + dlen) != '\0')
	{
		dlen++;
	}
	while ((src + k) != '\0' && dlen < 97 && k < n)
	{
		dest + dlen = src + k;
		dlen++;
		k++;
	}
	dest + dlen = '\0';
	return (dest);
}
