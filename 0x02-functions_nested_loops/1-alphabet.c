#include "main.h"

/**
 * main -This is the main function
 * Description: prints alphabets in lower case
 *
 * Return: Nothing
 */
void print_alphabet(void)

{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
