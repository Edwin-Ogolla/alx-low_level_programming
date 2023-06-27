#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int l = 0;

	int p;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (p = l; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
