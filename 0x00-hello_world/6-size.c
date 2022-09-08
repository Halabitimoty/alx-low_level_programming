#include <stdio.h>
/**
 * *main - Entry point
 * *Return: Always 0 (Success)
 * *Command: it's prints out the size of char,
 * *int, long int, long long int and float
 */

int main(void)
{
	prinf("Size of a char: %lu bytes(s)",sizeof(char));
	prinf("Size of an int: %lu bytes(s)",sizeof(int));
	prinf("Size of a long int: %lu bytes(s)",(long)sizeof(int));
	prinf("Size of a long long: %lu bytes(s)",(long long)sizeof(int));
	prinf("Size of a float: %lu bytes(s)",sizeof(float));
	return (0);
}
