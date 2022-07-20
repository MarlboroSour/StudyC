#include "main.h"

void puts2(char *str)
{
      while (*str != '\0')
       {
           _putchar(*str);
           str+=2;
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

    str = "0123456789";
    puts2(str);
    return (0);
}