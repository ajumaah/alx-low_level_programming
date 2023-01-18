#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j, k;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", j *k);
		return (0);
	}
	printf("Error\n");
	return (1);
}
