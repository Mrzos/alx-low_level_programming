#include <stdio.h>

/**
 * main - is to type alphabitic from A to Z
 *
 * return : always (0) (success) 
 */
int main(void)
{
       
        char n = 'a';

          while(n <= 122)
          {
             putchar(n);
             n++;
          }
        return (0);
}
