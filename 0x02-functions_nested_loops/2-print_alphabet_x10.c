#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10 in lower case followed with new line
 */
void print_alphabet_x10(void)
{
	char i;

	while(a <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			{
				_putchar(i);
			}
	}
	_putchar('\n');
}
