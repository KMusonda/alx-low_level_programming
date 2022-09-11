#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * return: always 0
 */
int main(void)
{
write(2, "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return(1);
}
