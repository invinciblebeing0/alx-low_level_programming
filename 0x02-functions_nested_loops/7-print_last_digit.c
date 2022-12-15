#include "main.h"
/**
 * print_last_digit - Entry
 * @n: the number to find last digit
 * Return: 0
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	return (r);
}
