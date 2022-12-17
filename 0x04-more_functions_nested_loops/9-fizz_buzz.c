#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers 1 to 100
 * 3 times prints fizz in place of the number
 * 5 time prints buzz in place of a number
 * 3 and 5 prints fuzzbuzz in plave of a number
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
			printf("%s", b);
		else if (a % 3 == 0)
			printf("%s ", f);
		else if (a % 5 == 0)
			printf("%s ", b);
		else if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s ", fb);
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
