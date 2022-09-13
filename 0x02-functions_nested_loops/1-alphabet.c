#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	char ch = 'a'
	while(ch <= 'z')
	{
		print_alphabet("%c ", ch);
		ch++;
	}
	return (0);
}
