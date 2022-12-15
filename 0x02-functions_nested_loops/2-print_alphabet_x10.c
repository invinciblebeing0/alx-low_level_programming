#include "main.h"
/**
 * print_alphabet_x10 - Entry
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	char c = 'a';

	while (i++ <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
