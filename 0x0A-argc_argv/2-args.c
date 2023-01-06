#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments a program receives
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
