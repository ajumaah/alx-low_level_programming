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
	int str1, str2, str3;
	char *str;

	str1 = 0;
	str2 = 0;
	str3 = 0;

	if (s1 != NULL && s2 != NULL)
	{
		for (str1 = 0; s1[str1]; str1++)
			;
		for (str2 = 0; s2[str2]; str2++)
			;
	}
	str = malloc(sizeof(char) * (str1 + str2 + 1));
	if (str == NULL)
		return (NULL);
	while (str3 <= (str1 + str2))
	{
		if (str3 < str1)
			str[str3] = s1[str3];
		else
			str[str3] = s2[str3 - str1];
		str3++;
	}
	return (str);
}
