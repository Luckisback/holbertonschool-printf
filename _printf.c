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

	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; prt[j].data != NULL; j++)
			{
				if (format[i + 1] == *(prt[j].data))
					prt[j].f(arg);
			}
		}
	}
	
	/**
	 * Initialiser une struct en associant un character à une fonction
	 *
	 * va_list arg; Déclarer une va_list arg
	 * va_start (arg, format);
	 * trouver les bonnes conditions pour parcourir la struct et call la fonction print associée
	 */
}
