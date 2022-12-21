#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the word to be counted
 *
 * Return - string
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; *s != '\0'; s++)
	{
		j++;
	}
	return (j);
}
