#include "main.h"

/**
 * cap_string - capitalizes all word in a string
 * @n: The string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *n)
{
	int quots = 0;

	while (n[quots])
	{
		while (!(n[quots] >= 'a' && n[quots] <= 'z'))
			quots++;
		if (n[quots - 1] == ' '  || n[quots - 1] == '\t' || n[quots - 1] == '\n' || n[quots - 1] == ',' || n[quots - 1] == '.' || n[quots - 1] == '.' || n[quots - 1] == '!' || n[quots - 1] == '?' || n[quots - 1] == '"' || n[quots - 1] == '(' || n[quots - 1] == ')' || n[quots - 1] == '{' || n[quots - 1] == '}' || quots == 0)
			n[quots] = n[quots] - 32;
		quots++;
	}
	return (n);
}
