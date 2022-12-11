/*
 * Title: 8-print_base16.c
 * Auth: Alfonse Juma
 * Date: Dec 11, 2022
 * Time: 7:13 pm
 */
#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints single digits of base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 16; num++)
		putchar((num % 16) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
