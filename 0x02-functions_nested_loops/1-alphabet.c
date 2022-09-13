#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	int ch;

	print_alphabet("prints the alphabet, in lowercase, followed by a new line :\n");
	for (ch = ‘a’; ch <= ‘z’; ch++)

		 putchar(ch);

	 	 putchar (‘\n’ );

	return (0);
}
