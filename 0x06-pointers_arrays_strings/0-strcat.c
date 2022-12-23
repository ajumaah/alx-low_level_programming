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
	int a = 0, b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a]; a++)
		dest[a++] = src[a];
	return (dest);
}
