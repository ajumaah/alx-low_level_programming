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
	int (num1, num2);

	while (num1 < 10)
	{
		while (num2 = num1 + 1)
		{
			putchar((num1 % 10) + '0');
			num1++;
			putchar((num2 % 10) + '0');
			num2++;
			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
