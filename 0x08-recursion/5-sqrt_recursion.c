#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * @i: an intger
 * Return: the resulting square root
 */
int sqrt_with_two_arrg(int n, int i);
int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqrt_with_two_arrg(n, i));
}
int sqrt_with_two_arrg(int n, int i)
{
	if ((i * i) == n)
	{
		if (i >= 0)
		{
			return (i);
		}
	}
	else if ((i * i) > n || n < 0)
	{
		return (-1);
	}
	return (sqrt_with_two_arrg(n, i + 1));
}
