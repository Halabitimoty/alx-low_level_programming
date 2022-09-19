#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout
 *
 *  @str: char pointer
 */

void _puts(char *str)
{
	int count;

	count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
