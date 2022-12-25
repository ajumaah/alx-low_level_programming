#include "main.h"

/**
 * string_toupper - a functuon to change all lower case to upper case
 * @n: string to change
 *
 * Return: uppercase
 */

char *string_toupper(char *n)
{
	int j;

	j = 0;

	for (; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
	}
	return (n);
}
