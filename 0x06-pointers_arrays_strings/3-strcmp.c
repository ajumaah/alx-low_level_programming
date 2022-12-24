#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: compared string
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
		j++;
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	}
	return (0);
}
