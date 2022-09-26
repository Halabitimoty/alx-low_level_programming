#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string pointer to char type
 * @accept: consist only of bytes
 *
 * Return: pointer to the byte
 *
 * AUTHOR -  ALABI TIMOTHY
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + j);
			j++;
		}
		i++;
	}
	return ('\0');
}
