#include <stdio.h>
/**
 * main -  Program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
printf("Size of char: %zu bytes\n", (unsigned long)sizeof(char));
printf("Size of int: %zu bytes\n", (unsigned long)sizeof(short));
printf("Size of long int: %zu bytes\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %zu bytes\n", (unsigned long)sizeof(long long int));
printf("Size of float: %zu bytes\n", (unsigned long)sizeof(float));
return (0);
}
