#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: concanated string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, a;

	while (dest[dlen])
	{
		dlen++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest[dlen] = src[a];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
