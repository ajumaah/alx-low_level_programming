/**
 * File: 0-putchar.c
 * Auth: Alfonse Juma
 * Date: Dec 14, 2022
 * Time: 15:40 pm
 *
 */
#include <stdio.h>
#include "main.h"

/**
 * main- This is main function
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
