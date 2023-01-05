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
	char haystack, needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (NULL);
}
