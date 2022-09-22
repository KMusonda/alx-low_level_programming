#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: character to be connected
 * @src: charater to be conected
 * Return: return a string
 */

char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (dest);
}
