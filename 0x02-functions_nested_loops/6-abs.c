#include "main.h"
/**
 * _abs - Entry
 * @n: the value to check
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		_putchar(-n);
	else
		_putchar(n);
	return (0);
}
