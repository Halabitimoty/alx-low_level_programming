/**
 * main - Entry point
 * Return: Always 0 (Success)
 * print_alphabet - function prints alphabeth in lowercase
 * Auth - ALABI TIMOTHY
 */

#include "main.h"

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
