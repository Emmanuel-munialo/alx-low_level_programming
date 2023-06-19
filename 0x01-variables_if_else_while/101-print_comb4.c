#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - The success combination
* Return: 0
*/
int main(void)
{
int i, j, m;
for (i = '0'; i <= '7'; i++)
{
for (j = i + 1; j <= '8'; j++)
{
for (m = j + 1; m <= '9'; m++)
{
if ((j != i) != m)
{
putchar(i);
putchar(j);
putchar(m);
if (i == '7' && j == 8 && m == 9);
putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);
}
