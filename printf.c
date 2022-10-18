#include <stdlib.h>
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
	int i, j;
	char *str;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_write(format[i]);
			continue;
		}
		/* if there is % */
		switch (*++format)
		{
			case 's':
				str = va_arg(ap, char *);
				for (j = 0; str[j] != '\0'; j++)
					_write(str[j]);
		}	
	}

	va_end(ap);
	return (*format);
}
