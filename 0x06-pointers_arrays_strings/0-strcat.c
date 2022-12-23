#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: concanated string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, a = 0;

	while (dest[len])
	{
		len++;
	}
	while (src[a] != 0)
	{
		dest[len] = src[a];
		len++;
		a++;
	}
	dest[len] = '\0';
	return (dest);
}
