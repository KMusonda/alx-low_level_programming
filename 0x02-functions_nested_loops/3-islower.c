#include "main.h"

/**
 * _islower(int c) - checks for lower case letter
 *
 * Description: checks weather the character is lowercase
 * @c: Number to pass to _islower function
 * Return: returns 1 and 0 depending on the condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
