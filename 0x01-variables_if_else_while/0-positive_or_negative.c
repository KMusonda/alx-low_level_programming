#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * 
 * Description: using the main function
 * this program prints "Programing is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
  /*your code goeas there*/
if (n > 0)
}
{
	printf("%i is positive\n", n);
}
{
else if (n == 0)
}
{
	printf("%i is zero\n", n);
}
{
else if (n < 0)
}
{
	printf("%i is negative\n", n);
}
{
return (0);
}
