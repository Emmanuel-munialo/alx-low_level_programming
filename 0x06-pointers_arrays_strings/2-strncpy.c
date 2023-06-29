#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int s;
s = 0;
while (s < n && src[s] != '\0')
{
dest[s] = src[s];
s++;
}
while (s < n)
{
dest[s] = '\0';
s++;
}
return (dest);
}
}
