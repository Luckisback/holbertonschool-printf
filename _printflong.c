#include "main.h"

/**
 * _printflong - prints output according to a format
 * Description: prints output according to a format:
 * s prints a string, c prints a character, % prints a percent
 * @format: type of data we need to print
 * @prt: struct we iterate through
 * @arg: arg we iterate through
 * Return: the number of characters printed (excluding the
 * null byte)
 */

int _printflong(const char *format, print_t prt[], va_list arg)
{
	int i;
	int j;
	int count = 0;

	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; prt[j].data != NULL; j++)
			{
				if (format[i + 1] == *prt[j].data)
				{
					count += prt[j].f(arg);
					break;
				}
			}
			if (prt[j].data == NULL)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

	}
	return (count);
}
