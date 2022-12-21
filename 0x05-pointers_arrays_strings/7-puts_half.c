#include "main.h"

/**
 * puts_half - prints half of a string 
 * @str: string to be halfed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
		b = str[a];
	}
	if (a % 2 == 0)
	{
		a = 1/2;
	}
	else
	{
		a = (a + 1) / 2;
	}
	{
		_putchar(j);
	}
	_putchar('\n')
}
