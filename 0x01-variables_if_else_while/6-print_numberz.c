#include<stdio.h>

/**
 * main -entry point
 *
 * Description: print 0-9 using putchar
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
