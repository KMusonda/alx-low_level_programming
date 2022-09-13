#include <stdio.h>

/**
 * main - print all lower case letter
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	int ch;
	print_alphabet("print the alphabet in lowercase followed by a new line :\n");

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar ('\n');
	return (0);
}
