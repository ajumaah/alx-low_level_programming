/**
 * File: 0-putchar.c
 * Auth: Alfonse Juma
 * Date: Dec 14, 2022
 * Time: 16:40 pm
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
	int t;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}
	putchar('\n');
}
