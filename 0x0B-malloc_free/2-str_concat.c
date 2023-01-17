#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatinate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int str1, str2, j = 0;
	char *array;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (str1 = 0; str1 <= *s1; str1++)
	{
	}
	for (str2 = 0; str2 <= *s2; str2++)
	{
	}
	array = malloc(sizeof(char) * (str1 + str2 + 1));
	if (array == NULL)
		return (NULL);
	while (*s1)
	{
		array[j] = *s1;
		j++;
		s1++;
	}
	while (*s2)
	{
		array[j] = *s2;
		j++;
		s2++;
	}
	return (array);
}
