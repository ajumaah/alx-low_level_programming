/*
 * Title: 1-last_digit.c
 * Auth: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 1:50pm
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main function
 * Description: assigns random number to variable n each time it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) != 0 && (n % 10) < 6)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
