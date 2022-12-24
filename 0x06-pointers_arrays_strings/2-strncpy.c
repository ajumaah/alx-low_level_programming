#include "main.h"

/**
 * _strncpy - a function that copy a string
 * @dest: string one
 * @src: string two
 * @n: byte
 *
 * Return: copied value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j++] = '\0';
	}
	return (dest);
}
