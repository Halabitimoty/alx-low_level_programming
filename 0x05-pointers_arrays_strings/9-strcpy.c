#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 *
 *  @dest: char pointer destination
 *  @src: char pointer (size of Array)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int str_len;

	i = 0;
	str_len = 0;

	while (*(src + str_len) != '\0')
		str_len++;

	while (i < str_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (des);
}