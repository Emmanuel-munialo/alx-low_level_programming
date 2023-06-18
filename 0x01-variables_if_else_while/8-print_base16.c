#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int i;
char l;
for (int i = 0; i <= 9; i++)
putchar(i);
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
