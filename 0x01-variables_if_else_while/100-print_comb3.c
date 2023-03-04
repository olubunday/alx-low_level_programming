#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = 0; tens < 9; tens++)
	{
		for (ones = tens + 1; ones < 10; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
