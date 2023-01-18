#include <stdio.h>

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
	print("s%\n", argv[0]);
	return (0);
}
