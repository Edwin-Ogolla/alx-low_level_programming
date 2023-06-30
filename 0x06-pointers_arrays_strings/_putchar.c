#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to student
 * @c: The character to print
 * Return: 1 if successful
 * If error, -1 is returned and errno set
 */
int_put char(char c)
{
	return (write(1, &c, 1);
}
