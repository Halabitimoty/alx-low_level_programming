/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Task - Function that prints alphabeth
 * in lowercase
 * print_alphabet - prints alphabeth in lowercase
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
