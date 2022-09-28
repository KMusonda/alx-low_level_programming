#include "main.h"

/**
 * _strlen_recursion - returns the lenght of the string
 *
 * @s: string to be returned
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int (sum = 0);

	if (*s != '\0')
	{
		sum++;
		sum +=  _strlen_recursion(s + 1);
	}
	return (sum);
}
