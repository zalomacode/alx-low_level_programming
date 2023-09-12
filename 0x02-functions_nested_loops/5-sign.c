#include "main.h"

/**
 * print_sign - print + if n is greater than zero
 *
 * @n: takes interger type input for function
 *
 * Return: 1 if +, 0 if 9 and _1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-10);
	}
}
