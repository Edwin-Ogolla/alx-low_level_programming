#include <stdio.h>
/**
 * main - Prints alphabet in lower case except q and e
 *
 * Return: (0) if successful
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
