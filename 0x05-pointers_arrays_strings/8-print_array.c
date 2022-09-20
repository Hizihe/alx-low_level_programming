#include "main.h"
#include <stdio.h>

/**
 * print_array - print a element of array
* @a: array
 * @n: number of elements
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	putchar('\n');
}
