#include "main.h"
#include <stdio.h>
/**
* main -  a function that computes the absolute value of an integer.
* Prototype: int _abs(int);
*
* Return: Always 0.
*/
int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
