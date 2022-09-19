#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 *
 *  @str: char pointer
 */

void puts2(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while (*(s + count) != '\0')
		count++;

	for (i = count; i < count; i++)
	{
		if ((*s % 2) == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
