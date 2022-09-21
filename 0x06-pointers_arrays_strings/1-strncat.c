#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination
 * @src: pointer to source string
 * @n: number of byte
 *
 * Return: Always Return char pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_len_dest = 0;
	int i, j = 0, total_len;

	while (*(dest + str_len_dest) != '\0')
		str_len_dest++;

	total_len = str_len_dest + n;

	for (i = str_len_dest; i < total_len; i++)
		*(dest + i) += *(src + j++);

	return (dest);
}
