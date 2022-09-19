#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 *  @str: char pointer
 */

void puts_half(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while (*(str + count) != '\0')
		count++;

	for (i = (count / 2); i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}