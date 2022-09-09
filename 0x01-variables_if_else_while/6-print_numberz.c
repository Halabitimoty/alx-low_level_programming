#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *  ** main - Entry point
 *   ** Return: Always 0 (Success)
 *    ** task : print out decimals
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(atoi(n));
	}

	putchar('\n');
	return (0);
}
