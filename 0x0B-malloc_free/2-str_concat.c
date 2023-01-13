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
	int a = 0, b = 0, count = 0;
	unsigned int j;
	char *newstr = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[a] != '\0' && s2[b] != '\0')
	{
		a++;
		b++;
	}
	newstr = (char *)malloc((a + b + 1) *sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (, s1[j] != '\0',)
	{
		j++;
		newstr[j] = s1[j];
	}
	for (, s2[count] != '\0',)
	{
		count++;
		newstr[j] = s2[count];
		j++;
	}
	return (newstr);
}
