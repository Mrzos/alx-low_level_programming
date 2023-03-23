#include <stdio.h>

/**
 * main - is to type alphabitic from A to Z
 *
 * Return : always 0 (success)
 */
int main(void)
{
        char n = 'a';
        char m = 'A';

        while ( n <= 122)
        {
                putchar(n);
                n++;
        }
        while ( m <= 90)
        {
                putchar(m);
                m++;
        }
        putchar('\n');
        return (0);
}
