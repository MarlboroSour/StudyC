#include "main.h"

void print_rev(char *s)
{
   int count = 0;
   while (*s != '\0')
   {
       count++;
       s++;
   }
   while (count > 0)
       {
           s--;
           _putchar(*s);
           count--;
           
       }
        _putchar('\n');
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}