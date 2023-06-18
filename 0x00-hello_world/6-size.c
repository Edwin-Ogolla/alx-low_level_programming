#include <stdio.h>
/**
 * main -Prints the size of various types on the computer it is compiled and run on
 *
 * Return: (0) if successful
 */
int main(void)
{
	printf("Size of a char is %d bytes\n", sizeof(char));
	printf("Size of int is %d bytes\n", sizeof(int));
	printf("Size of long int is %d bytes\n", sizeof(long int));
	printf("Size of long long is %d bytes\n", sizeof(long long));
	printf("Size of float is %d bytes\n", sizeof(float));
	return (0);
}
