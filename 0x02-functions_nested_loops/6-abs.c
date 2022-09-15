#include "main.h"
#include <stdio.h>
/**
 * _abs - compute absolute value of integer
 * @n: (int) the integer to be converted
* Return: 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
