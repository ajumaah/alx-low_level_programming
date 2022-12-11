/*
 * Title: 102-print_comb5.c
 * Auth: Alfonse Juma
 * Date: Dec 11, 2022
 * Time: 10:20 pm
 */
#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints all possible different combinations of two two-digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 % 100) + '0');
			putchar((num2 % 100) + '0');
			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
