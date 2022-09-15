#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase letters
* @c: is the int that will use for the argument of the function
* Return: 0
*/
int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
