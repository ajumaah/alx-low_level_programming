#include "main.h"

/**
 * more_numbers - prints 10 times the num from 0 to 14
 * Return: 0 to 14 and a new line
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 10; a++)
	{
		for (a = 1; a <= 14; a++)
		{
			for (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
		_putchar(a % 10) + '0');
		}
	}
	_putchar('\n');
}
