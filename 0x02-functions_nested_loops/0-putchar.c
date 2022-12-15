#include "main.h"

/**
 * main - this is the main function
 * Description: 0-putchar.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k[] = "_putchar";
	int i;
	for (i = 0; i < 5; i++)
	{
		putchar(k[i]);
	}
	putchar('\n');
	return (0);
}
