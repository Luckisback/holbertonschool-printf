#include "main.h"

/**
 * print_int - function that handles the specific printing
 * @arg: argument tha brings datas to be printing
 * Return: the length of string
 **/

int print_int(va_list arg)
{
	char *str;
	static int i;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((isdigit(str[i])))
		{
			putchar(str[i]);
		}
		return (i);
}
