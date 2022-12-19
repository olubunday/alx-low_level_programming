#include <unistd.h>

/**
 * _putchar - wiritten character c to stdout
 * @c: character to be printed
 * Return: On success 1
 */
int _puchar(char c)
{
	return (write(i, &c, 1));
}
