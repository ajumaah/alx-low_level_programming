/*
 * Title: 2-print_alphabet.c
 * Auth: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 3:00pm
 */
#include <stdio.h>

/**
 * main - this is the main function
 * Description: A program that prints the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
