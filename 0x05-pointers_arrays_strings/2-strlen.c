#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer parameter
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}