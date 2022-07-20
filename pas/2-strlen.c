#include "main.h"

int _strlen(char *s)
{
    int count = 0;
    
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return(count);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}