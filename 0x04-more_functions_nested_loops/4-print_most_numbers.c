#include "main.h"

/**
 * print_most_numbers - print 0 to 9 followed by a new line
 *
 * Return: numbers 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int k;
	
	for (k = 0; k < 10; k++)
	{
		if ((k == 2) || (k == 4))
			countinue;
		else
			_putchar(k + '0');
	}
	_putchar('\n');
}
