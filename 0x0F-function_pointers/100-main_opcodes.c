#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the opcodes of its own main function
 *@argc: parameters character.
 *@argv: parameters vector
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int j, k;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < k; j++)
	{
		printf("%02hhx", *((char *)main + j));
		if (j < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
