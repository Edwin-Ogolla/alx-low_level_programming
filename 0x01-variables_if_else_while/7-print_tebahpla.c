#include <stdio.h>
/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: (0) if successful
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
