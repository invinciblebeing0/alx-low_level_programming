#include "main.h"
/**
 * times_table - Entry
 * Return: 0
 */
void times_table(void)
{
	int x, y, prod;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			prod = x * y;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
