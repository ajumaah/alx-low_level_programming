#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10 in lower case
 */
void print_alphabet_x10(void)
{
	char i;
	int a;

	for (a = 1, a <= 10, a++)
	{
	
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
