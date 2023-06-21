#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) if successful
 */
int main(void)
{char alphabet = 'a';
 char ALPHABET = 'A';
        while (alphabet <= 'z')
        {putchar (alphabet);
                alphabet++;
        }
        putchar ('\n');
	while (ALPHABET <= 'Z')
	{putchar (ALPHABET);
		ALPHABET++;
	}

        return (0);
}
