#include <unistd.h>

/**
 * _putchar - writes to character c to stdout
 * @c: The character to print
 *
 * Return: Always 1 (Success)
 * On error, 0 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
