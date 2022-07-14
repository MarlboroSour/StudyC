#include "main.h"

void print_alphabet_x10(void)

{
   int i;
   for(i = 1; i <= 10; i++)
   {
        char alp;
        alp = 'a';
        for(alp = 'a'; alp <= 'z'; alp++)
           {
                _putchar(alp);
           }
        _putchar('\n');
   }
}