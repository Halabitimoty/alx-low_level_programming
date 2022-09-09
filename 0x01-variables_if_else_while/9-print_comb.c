#include <stdio.h>
/*
 **main - Entry point
 ** Return; Always 0(Sucess)
 ** TasK : print numbers with , seperating them
 *
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
