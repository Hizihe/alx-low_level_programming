#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
	char *_dest = dest;
	int start_cat = 0;

	while (1)
	{
		if (*_dest == '\0' && start_cat == 0)
		{
			start_cat = 1;
			*_dest = *src;
			src++;
		}

		else if (start_cat == 1)
		{
			*_dest = *src;
			if (*src == '\0')
			{
				break;
			}
			src++;
		}
		_dest++;
	}
	return (dest);
}
