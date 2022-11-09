#include "main.h"

/**
 * print_string - prints a string
 * Description: prints a string
 * @arg: arg to print
 * Return: void
 */

int print_string(va_list arg)
{
	char *str;
	int i = 0;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
