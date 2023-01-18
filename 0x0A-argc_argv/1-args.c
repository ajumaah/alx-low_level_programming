#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the number of args passed to a programe
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
