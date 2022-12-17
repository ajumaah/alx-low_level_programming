#include "main.h"
/**
 * _isupper - check for uppercase character.
 *@c: the charaters to be cheked
 * Return: 1 if c is uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
