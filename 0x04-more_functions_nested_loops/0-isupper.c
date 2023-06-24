#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: The letter to be checked
 * Return: 1 for upper 0 for anything else
 */
int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	return (0);
}
