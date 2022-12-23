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
	int len = 0, a;

	while (dest[len])
	{
		len++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest[len] = src[a];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
