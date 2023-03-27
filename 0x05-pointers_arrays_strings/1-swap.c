#include "main.h"

/**
 * swap_int - to change the value of two ints
 * @a: is a variable 
 * @b: is second variable
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int *p = a;
	int c = *a;
	int *q = b;

	*p = *b;
	*q = c;
}
