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

	while (*(str + count) != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		if ((*str % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
