#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every other character
* @str: string
*
* Return: nothing
*/

void puts2(char *str)
{
	int skip = 0;

	while (*str != '\0')
	{
		if (skip == 0)
		{
			putchar(*str);
			skip = 1;
		}
		else
			skip = 0;
		str++;
	}
	putchar('\n');
}
