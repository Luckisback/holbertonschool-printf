#include "main.h"

/**
 * print_int - function that handles the specific printing
 * @arg: argument tha brings datas to be printing
 * Return: the length of string
 **/

int print_int(va_list arg)
{
	long int num;
	int len = 0;
	long int div = 1;

	num = va_arg(arg, int);

	if (num < 0)
	{
		len += _putchar('-');
		num *= -1;
	}
	while ((num / div) > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %=  div;
		div /= 10;
	}
	return (len);
}
