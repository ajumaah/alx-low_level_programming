#include "main.h"
/**
 * _isdigit - check for the digits 0-9
 * @c: the digit to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 ; c <= 59)
		return (1);
	else
		return (0);
}
