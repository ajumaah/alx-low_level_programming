/*
 * Title: 100-print_comb3.c
 * Auth: Alfonse Juma
 * Date: Dec 11, 2022
 * Time: 8:30 pm
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

	while (num < 100)
	{
		putchar((num % 100) + '00');
		num++;
		if (num != 10 && num != 01)
			continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
