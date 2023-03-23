#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, m, x;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (x = m + 1; x < 10; x++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((x % 10) + '0');

				if (n == 7 && m == 8 && x == 9)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
