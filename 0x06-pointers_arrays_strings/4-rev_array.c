#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int d;
int t;
for (d = 0; d < n--; d++)
{
t = a[d];
a[d] = a[n];
a[n] = t;
}
}
