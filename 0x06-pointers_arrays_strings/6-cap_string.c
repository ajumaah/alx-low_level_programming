#include "main.h"

/**
 * cap_string - a function that capitalizes all words in a string
 * @n: string to be capitalized
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *n)
{
	int j, k;
	int caps = 32;
	int quots[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', 't'};

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - caps;
		}
		caps = 0;

		for (k = 0; k <= 12; k++)
		{
			if (n[j] == quots[k])
			{
				k = 12;
				caps = 32;
			}
		}
	}
	return (n);
}
