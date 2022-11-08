#include "main.h"

/**
 * print_string - prints a string
 * Description: prints a string
 * @arg: arg to print
 * Return: void
 */

void print_string(va_list arg)
{
	int length = 0;
	int i = 0;
	char *str;

	str = va_arg(arg, char*);
	for (i = 0; str[i]; i++)
		length++;
	write(1, str, length);
}
