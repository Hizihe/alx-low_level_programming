#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints to standard error
 * Return: Always 0 (Success)
 */

int main(void)
{

	char mes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

			fprintf(stderr, "%s", mes);
			return (0);
}
