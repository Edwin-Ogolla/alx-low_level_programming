#include <stdio.h>
/**
 * main -Prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: (0) if successful
 */
int main(void)
{
	printf("Size of a char is: %zu bytes\n", sizeof(char));
	printf("Size of int is:%zu bytes\n", sizeof(int));
	printf("Size of long int is: %zu bytes\n", sizeof(long int));
	printf("Size of long long int is: %zu bytes\n", sizeof(long long int));
	printf("Size of float is: %zu bytes\n", sizeof(float));
	return (0);
}
