#include "main.h"

/**
 * _strpbrk - a function that searches a string for any set of byte
 * @s: first string
 * @accept: string to search
 *
 * Return: pointer s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
