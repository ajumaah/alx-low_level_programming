#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: value destination
 * @src: value source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[i] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
