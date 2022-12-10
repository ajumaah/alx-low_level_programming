#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Title: 0-positive_or_negative.c
 * Ath: Alfonse Juma
 * Date: Dec 10, 2022
 * Time: 12:53 pm
 */

/**
 * main -This programe will print random numbers and determin if the
 * number(s) is/ are positive, negative or zero.
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there */
	if (n == 0)
		printf("The number : %d is zero\n", n);
	
	else if (n > 0)
		printf("The number : %d is positive\n", n);
	else
		printf("The number : %d is negative\n",n);
	return (0);
}
