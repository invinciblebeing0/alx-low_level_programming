#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
