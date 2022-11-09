#include "main.h"

/**
 * print_string - prints a string
 * Description: prints a string
 * @arg: arg to print
 * Return: void
 */

int print_string(va_list arg)
{
	int length = 0;
	int i = 0;
	char *str;
	int count;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		length++;
		count++;
	}
	write(1, str, length);
	return (count);
}
