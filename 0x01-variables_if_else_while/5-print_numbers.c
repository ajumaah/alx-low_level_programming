/*
 * Title: 5-print_numbers.c
 * Auth: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 4:50 pm
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

	num = 1;

	while (num <= 10)
	{
		printf("%d", num);
		num++;
	}
	
	return (0);
}
