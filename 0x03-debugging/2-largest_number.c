#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > b && b < c))
	{
		if (a > c)
		{
			largest = a;
		}
		else if (c < a)
		{
			largest = c;
		}
	}
	else if ((b > a && a > c) || (b > a && a < c))
	{
		if (b > c)
		{
			largest = b;
		}
		else if (c > b)
		{
			largest = c;
		}
	}
	else if ((c > b && b > a) || (c > b && b < a))
	{
		if (c > a)
		{
			largest = c;
		}
		else if (c < a)
		{
			largest = a;
		}
	}
	return (largest);
}
