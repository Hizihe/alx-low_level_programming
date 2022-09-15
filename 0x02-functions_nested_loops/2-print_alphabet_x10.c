#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - function to print abc 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(alphabet[j]);
		}
		putchar('\n');
	}
}
