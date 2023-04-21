#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, d;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (d = m + 1; d < 10; d++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((d % 10) + '0');

				if (n == 7 && m == 8 && d == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
