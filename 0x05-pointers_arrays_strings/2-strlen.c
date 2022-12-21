#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the word to be counted
 *
 * Return - string
 */

int _strlen(char *s)
{
	char juma;
	
	for (; *s != '\0'; s++)
	{
		juma++;
	}
	return(juma)
}
