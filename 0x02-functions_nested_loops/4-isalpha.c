#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for alphabets
 * @c: (int) the character to be checked
 *
* Return: 0
*/
int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
