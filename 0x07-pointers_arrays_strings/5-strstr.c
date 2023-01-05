#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: where to look for a substring
 * @needle: substring to look for
 * 
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int s = 0;
	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
