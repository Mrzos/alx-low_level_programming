#include "main.h"
/**
 * factorial - prints the chessboard.
 * @n: a variable
 * Return: value.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return n * factorial(n - 1);
}
