#include "main.h"

void puts_half(char *str)
{
    int count, i, n;

    count = 0;

    while(*str != '\0')
    {
        count++;
    }

    if (count % 2 == 0)
    {
        for (i = count / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
    }
    else if (count % 2)
	{
		for (n = (count - 1) / 2; n < count - 1; n++)
		{
			_putchar(str[n + 1]);
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
    puts_half(str);
    return (0);
    
} 
