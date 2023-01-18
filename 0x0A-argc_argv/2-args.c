#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints all arguments a program receives
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 1;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
