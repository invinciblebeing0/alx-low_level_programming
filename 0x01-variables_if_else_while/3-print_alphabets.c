#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
