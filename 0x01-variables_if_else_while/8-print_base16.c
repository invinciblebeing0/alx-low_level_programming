#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char c;

	int d;

	d = 0;
	c = 'a';
	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
