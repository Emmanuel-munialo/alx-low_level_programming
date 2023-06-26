#include <main.h>
/**
 * swap_int - swaps the values of integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: *a = *b
 */
int swap_int(int *a, int *b)
{
int v;
v = *a;
*a = *b;
*b = v;
}
