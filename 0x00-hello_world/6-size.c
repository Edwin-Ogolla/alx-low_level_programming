#include <stdio.h>
/**
 * main -Prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: (0) if successful
 */
int main(void)
{
	printf("Size of a char is: %lu byte(s)\n", sizeof(char));
	printf("Size of int is:%lu byte(s)\n", sizeof(int));
	printf("Size of long int is: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int is: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float is: %lu byte(s)\n", sizeof(float));
	return (0);
}
