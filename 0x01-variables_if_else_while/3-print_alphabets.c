#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, and then in uppercase
* Return: 0
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
