#include "main.h"
#include <stdio.h>

/**
 * print_line - print line
 * @n: (int) the number of underscore (_) to be printed
 *
 * @brief A function that prints lines with _ symbol
 *     based on the number n given to it as argument
 * Return: (void)
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
