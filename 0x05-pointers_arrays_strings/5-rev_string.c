#include "main.h"

/**
 * rev_string - to print a str in reverse
 * @s: is a variable
 * Return: 0
 */
void rev_string(char *s)
{
	int l = 0;
	int f = 0;
	int len;
	char m;
	char v;

	while (s[l] != '\0')
	{
		l++;
	}
	len = l - 1;

	while (len > f)
	{
		m = s[len];
		v = s[f];
		s[len] = v;
		s[f] = m;
		len--;
		f++;
	}
}
