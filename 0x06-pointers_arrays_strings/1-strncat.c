#include "main.h"

/**
 * _strncat - a function that concanates two strings
 * @dest: string one
 * @src string two
 * @n: byte from src
 *
 * Return: the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (k = 0; k < n; k++)
	{
		dest[j + k] = src[k];
		if (src[k] == '\0')
			k = n;
	}
	return (dest);
}
