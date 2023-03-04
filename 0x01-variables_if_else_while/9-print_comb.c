#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n == 9)
			break;
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
