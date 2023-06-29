#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int k, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (k = 0; n[k] != '\0'; k++)
{
for (j = 0; j < 10; j++)
{
if (n[k] == s1[j])
{
n[k] = s2[j];
}
}
}
return (n);
}
