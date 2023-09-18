#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints an individual character
 * @c: The character to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
