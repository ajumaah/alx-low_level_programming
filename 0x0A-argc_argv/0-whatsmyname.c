#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the name of a program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
