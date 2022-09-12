#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Return: Always (success)
 */
int main(void)
{
	char n;

	for (n='0'; n<='9'; n++)
	{
		putchar(n);
	}

	putchar("\n");
	return(0);
}
