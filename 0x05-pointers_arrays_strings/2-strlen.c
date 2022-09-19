#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: (char*) pointer to the string to be checked
 * Return: (int) the length of the string.
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
