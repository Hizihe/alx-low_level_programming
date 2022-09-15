#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function to print abc
*
* Return: 0
*/
void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
}
