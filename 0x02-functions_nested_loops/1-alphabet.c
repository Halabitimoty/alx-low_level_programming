/*
 * print_alphabet(void) - function print alphabet in lowercase
 * Auth - ALABI TIMOTHY
 */

#include "main.h"
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
