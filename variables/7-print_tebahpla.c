#include <stdio.h>

int main(void)
{
    int a = 'z';
    
    while (a >= 'a')
    {
        putchar (a);
        a--;
    }
    putchar ('\n');
    return (0);
    
}