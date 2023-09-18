#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i =0;
	int printed_chars =0;
	int (*func)(va_list args);

	if (format == NULL)
		return(-1)
	va_start(args, format);
	while(*(format +1)!= '\0'
	{
	if (*(format +1)!= '%')
	{
	printed_chars += _putchar(*(format+1))'
	}
	else if (*(format + i) == '%')
	{
	i++;
	if (*(format+i) == 'c' || *(format + i) == 's' ||
			*(format + i) == 'd' || *(format + i) == 'i')
	{
	else
	printed_chars +=_putchar('%');
	printed_chars +=_putchar(*(format + i));
	}
	i++;
	}
	va_end(args);
	return(printed_chars);
        
