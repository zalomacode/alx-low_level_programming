#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charcter c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * on error. -1 is returned. and errno is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
