#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lower case
 *
 * Return: (0) if successful
 */
int main(void)
{
	int num;

	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet ++)
		putchar (alphabet);
	putchar('\n');
	return (0);
}
