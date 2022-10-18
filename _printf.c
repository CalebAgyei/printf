#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Print to stdout, standard output stream.
 * @format: A character string. 
 *
 * Description: The format string is composed of zero or more directives.
 * Handle the following conversion specifers: c, s, %
 * Return: The number of characters printed (excluding the null byte
 * used to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	va_start(ap, format);
	if (format[i] != '%')
	{
		_write(*format);
	}


	va_end(ap);
	return (*format);
}
