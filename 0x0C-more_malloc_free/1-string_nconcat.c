#include <stdio.h>
#include <stlib.h>
#include "main.h"

/**
 * string_nconcat - concatnate strings
 * @s1: target for concatnate
 * @s2: string to use
 * @n: int type
 *
 * Return: Alway 0 (Sucess)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, c = n;
	char *array;
	int j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;
	if (c >= k)
	{
		c = k;
		array = malloc(sizeof(char) * (j + k + 1));
	}
	else
		array = malloc(sizeof(char) * (j + n + 1));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < j; a++)
	{
		array[a] = s1[a];
	}
	for (b = 0; b < c; b++)
	{
		array[a++] = s2[b];
	}
	array[a++] = '\0';
	return (array);
}
