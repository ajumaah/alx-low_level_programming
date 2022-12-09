#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;
	int u;
	long int m;
	long long int a;
	float h;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(h));
	return (0);
}
