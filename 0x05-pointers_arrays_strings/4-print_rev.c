#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
