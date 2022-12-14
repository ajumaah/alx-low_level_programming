#include "main.h"
#include <unistd.h>
/**
 * File: 2-print_alphabet_x10.c
 * Auth: Alfonse Juma
 * Date: Dec 14, 2022
 * Time: 16:53 pm
 *
 */
#include <stdio.h>
/**
 * main- This is main function
 * Description: Prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int t, n;
	n =0;

	while (n < 10)
	{
		for (t = 'a'; t <= 'z'; t++)
			{
				_putchar(t);
			}
		n++;
		_putchar('\n');
	}
}
