/**Title: 0-positive_or_negative.c
 * Ath: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 12:53 pm
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- this is the main function  
 * Description: prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
