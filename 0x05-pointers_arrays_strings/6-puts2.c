#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;

	int t = 0;

	char *y = str;

	int p;

	while(*y != '\0')
	{
		y++;
		l++;
	}
	t = l-1;
	for (p = 0; p <= t; p++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
