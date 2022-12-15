#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp < n; fp++)
	{
		if (n % fp == 0)
		{
			n = n / fp;
			fp--;
		}
	}
	printf("%lu\n", fp);
	return (0);
}
