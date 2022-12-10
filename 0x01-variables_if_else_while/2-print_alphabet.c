/*
 * Title: 2-print_alphabet.c
 * Auth: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 3:00pm
 */
#include <stdio.h>

/**
 * main - this is the main function
 * Description: A programe that prints the alphabet in lowercase using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	for (i = "a"; i <= "z"; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
