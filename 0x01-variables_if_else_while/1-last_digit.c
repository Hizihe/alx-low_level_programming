#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	short int last_digit;
	char tmp_msg[20] = "Last digit of ";

	srand(time(0));
		n = rand() - RAND_MAX / 2;
			/* your code goes there */
		last_digit = n % 10;

			if (last_digit > 5)
	{
				printf("%s%d is %d and is greater than 5\n", tmp_msg, n, last_digit);
					}
				else if ((last_digit < 6) && last_digit != 0)
						{
									printf("%s%d is %d and is less than 6 and not 0\n", tmp_msg, n, last_digit);
										}
					else
							{
										printf("%s%d is %d and is 0\n", tmp_msg, n, last_digit);
											}

						return (0);
}
