#include <stdio.h>

/**
*main - Entry point
*
*Description: print all aphabet letters
*
*Return: Always 0 (Success)
*
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		purchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
