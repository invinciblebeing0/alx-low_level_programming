#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{

	int num1, num2;
	/*ASCII code for 0*/
	num1 = 48;

	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1);
				putchar(num2);
			}
			num2++;
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	putchar('\n');
	return (0);

}
