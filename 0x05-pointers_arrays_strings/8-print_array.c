#include <stdio.h>

/**
 * print_array - to tyepe  a string
 * @a: is a pointer
 * @n: a variable
 * Return: 0
 */
void print_array(int *a, int n)
{
	int l = 0;

	while (l < n)
	{
		printf("%d", a[l]);
		if (l != (n - 1))
		{
			printf(", ");
		}
		l++;
	}
	printf("\n");
}
