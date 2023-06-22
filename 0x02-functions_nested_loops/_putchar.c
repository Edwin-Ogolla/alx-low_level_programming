#include <unistd.h>
/**
 * _putchar - writes a character to standard output
 *
 * Return: 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c ,1));
}
