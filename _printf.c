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
	int i = 0, j = 0, count = 0;
	int len = _strlen(format);

	if (format == NULL)
	    return (-1);

	va_start(arg, format);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; prt[j].data != NULL; j++)
			{
				if (i > len)
					break;
				if (format[i + 1] == *(prt[j].data))
				{
					count += prt[j].f(arg);
					i += 2;
					break;
				}
			}
			if (prt[j].data == NULL)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				else
					return (-1);
			}
		}
		if (format[i] != '%' && i < len)
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
