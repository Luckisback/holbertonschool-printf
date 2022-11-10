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
	va_list arg;
	int len;

	print_t prt[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	len = _printflong(format, prt, arg);
	va_end(arg);

	return (len);
}
