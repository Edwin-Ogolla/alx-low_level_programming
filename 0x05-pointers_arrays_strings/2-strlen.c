#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: string
 * Return: length of str
 */
int _strlen(char *str)
{
	int l = 0;
	while (*str != 0)
	{
		l++;
		*str++;
	}
	return l;
}
