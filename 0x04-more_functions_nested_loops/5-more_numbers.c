#include "main.h"

/**
 * more_numbers - prints 10 times the num from 0 to 14
 * Return: 0 to 14 and a new line
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 1; b <= 14; b++)
		{
			while (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
		_putchar(b % 10) + '0');
		}
	}
	_putchar('\n');
}
