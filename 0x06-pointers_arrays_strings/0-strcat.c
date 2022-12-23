#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: void
 */
char *_strcat(int n; char *dest, char *src)
{
	int len = 0, a = 0;

	while (dest[len])
	{
		len++;
	}
	while (a < n && src[a])
	{
		dest[len] = src[a];
		len++;
		a++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
