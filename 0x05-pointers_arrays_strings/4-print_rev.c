#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
* @s: string to reverse
* Return: nothing
*/

void print_rev(char *s)
{
	int n = strlen(s);

	while (n >= 0)
	{
		if (*(s + n) != '\0')
			putchar(*(s + n));
		n--;
	}
	putchar('\n');
}
