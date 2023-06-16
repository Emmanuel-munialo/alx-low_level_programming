#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Assign a random number to the variable
* Return: 0
*/
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
printf("last digit %d is %d and is greater than 5\n", n, m);
else if (m == 0)
printf("last digit %d is %d is 0\n", n, m);
else if (m < 6 && m != 0)
printf("last digit %d is %d and is less than 6 and not 0\n", n, m);
return (0);
}
