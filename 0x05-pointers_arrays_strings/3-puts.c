#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: the string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	putchar ('\n');
}
