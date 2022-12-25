#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes rot13
 * @n: pointer
 *
 * Return: *n
 */

char *rot13(char *n)
{
	int j, k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for ( j = 0; n[j] != '\0'; j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (n[j] == data1[k])
			{
				n[j] = data2[k];
				break;
			}
		}
	}
	return (n);
}
