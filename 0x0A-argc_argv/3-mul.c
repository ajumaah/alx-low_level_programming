#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: Alway 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			res *= atoi(argv[j]);
		}
		printf("%d\n", res);
	}
	return (0);
}
