#include "main.h"

/**
 * swap_int - swaps two int variable values
 * @a: (int*) pointer to the first int value to be swapped
 * @b: (int*) pointer to the second int value to be swapped
* Return: (void)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
