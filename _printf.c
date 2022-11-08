#include "main.h"

/**
 * _printf - prints output according to a format
 * Description: prints output according to a format:
 * s prints a string, prints a character, % prints a percent
 * @format: type of data we need to print
 * Return: the number of characters printed (excluding the
 * null byte)
 */

int _printf(const char *format, ...)
{
	print_t prt[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list arg;
	int i = 0, j = 0;
	int len = _strlen(format);

	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; prt[j].data != NULL; j++)
			{
				if (i > len)
					break;
				if (format[i + 1] == *(prt[j].data))
				{
					prt[j].f(arg);
					i += 2;
				}
			}
		}
		if (format[i] != '%')
			_putchar(format[i]);
	}
	va_end(arg);
	return (len);
}
