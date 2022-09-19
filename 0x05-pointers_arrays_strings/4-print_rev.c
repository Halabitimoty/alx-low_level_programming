#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line
 *
 *  @s: char pointer
 */

void print_rev(char *s)
{
	int count;
	int str_len;

	count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	for (str_len = count - 1; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
}
