#include "main.h"
#include <unistd.h>
/**
 * _putchar
 * @c the character c to stdout
 * Return: on sucess 1
 * on error, -1 is returnred and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1,&c,1));
}
