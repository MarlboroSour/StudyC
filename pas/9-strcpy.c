#include "main.h"

/**
 * main - A function that copies a string 
 * including the null byte to a buffer
 * 
 * @src: a pointer to the string
 * @dest: a pointer to the buffer
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
    int i;
    
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return(dest);
    
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
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}