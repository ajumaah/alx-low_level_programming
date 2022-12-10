/*
 * Title: 4-print_alphabet.c
 * Auth: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 3:50pm
 */
#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints the alphabet excludung q and e in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	while (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
