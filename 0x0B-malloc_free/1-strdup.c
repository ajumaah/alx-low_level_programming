#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to newly allocated space in memory
 * @str: the string to be duplicated
 *
 * Return: Null
 */

char *_strdup(char *str)
{
	int j = 0;
	unsigned int k;
	char *newstr = NULL;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	newstr = (char *)malloc(j + 1 * sizeof(char));
	if (newstr != NULL)
	{
		for (k = 0; str[k] != '\0'; k++)
			newstr[k] = str[k];
	}
	else
	{
		return (NULL);
	}
	newstr[k] = '\0';
	return (newstr);
}
