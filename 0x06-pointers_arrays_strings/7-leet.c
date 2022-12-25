#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: input
 *
 * Return: Always 0 (Success)
 */

char *leet(char *n)
{
	int j, k;
	int letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replaced_by[] = {'4', '3', '0', '7', '1'};

	for (j = 0; n[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[j] == letters[k])
			{
				n[j] = replaced_by[k / 2];
				k = 10;
			}
		}
	}
	return (n);
}
