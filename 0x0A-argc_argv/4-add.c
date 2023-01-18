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
	int j, add = 0;

	if (argc < 1)
		return (0);

	for (j = 1; j < argc; j++)
	{
		if (!atoi(argv[j]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		add = add + atoi(argv[j]);
	}
	printf("%d\n", add);

	return (1);
}
