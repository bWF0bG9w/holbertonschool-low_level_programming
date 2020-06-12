#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints out a random number and checks if the last digit is greater
*than 5 or less than 6 but not 0
*Return: 0
*/

int main(void)
{
int n;
int lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n  % 10;
printf("Last digit of %d is %d and is", n, lastd);
if (lastd > 5)
{
printf("Last digit of %d is %d and is greater than 5/n", n, lastd);
}
else if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
return (0);
}
