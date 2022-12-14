#include "main.h"
/**
 * _isalpha - Entry
 *@c: char to be checked
 * Return: 1 if c is a char, 0 otherwise
 */
int _isalpha(int c)
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
