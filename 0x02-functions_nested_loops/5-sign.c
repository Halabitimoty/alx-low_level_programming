#include "main.h"

/**
 * print_sign - checks if
 * @n: is greater than 0 or less than 0
 * or equal to zero then prints +, 0 or -
 * accordingly
 * Return: +, 0 and - accordingly
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	else if (n == 0)
		_putchar(0);
	else
		_putchar('-');
}
