#include <stdio.h>
/**
 * main -  Program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(short));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
