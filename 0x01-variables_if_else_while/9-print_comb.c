/*
 * Title: 9-print_comb.c
 * Auth: Alfonse Juma
 * Date: Dec 11, 2022
 * Time: 7:50 pm
 */
#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints all possible combination of single digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
