#include "main.h"
/**
 * reverse_array - reverse array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int r1;
	int r2;
	int i = 0;

	while (i < n)
	{
		n--;
		r1 = a[i];
		r2 = a[n];
		a[n] = r1;
		a[i] = r2;
		i++;
	}
}
