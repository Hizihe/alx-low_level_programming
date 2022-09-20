#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of a string
 * @str: (char*) pointer to the string to be printed
*
* Return: (void)
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int n = len - (len / 2);

	str = str + n;

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
