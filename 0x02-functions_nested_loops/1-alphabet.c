#include <main.h>
#include <stdio.h>

/**
 * main - print all lower case letter
 *
 * Return: Always 0.
 */
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar ('\n');
	return (0);
}
