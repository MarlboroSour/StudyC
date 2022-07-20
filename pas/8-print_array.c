#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
   short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);

		if (n != 0)
			printf(", ");
	}
	printf("\n");
}

#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}