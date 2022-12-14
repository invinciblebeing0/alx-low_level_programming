#include "main.h"
/**
 * _abs - Entry
 * @n: the value to check
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		_putchar("%i\n", (n * -1));
	else
		_putchar("%i\n", n);
	return (0);
}
