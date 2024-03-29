#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error, return -1 and set error accordingly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
