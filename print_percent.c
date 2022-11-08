#include "main.h"

/**
 * print_percent - prints a %
 * Description: prints a percent
 * @arg: arg
 * Return: void
 */

void print_percent(va_list arg)
{
	(void) arg;
	write(1, "%", 1);
}
