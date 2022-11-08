#include "main.h"

/**
 * _strlen -  A function that accounts the nimber of char
 * @format:  Argument entered in order to deal with
 *
 * Return: its returns the number of char accounted
 **/

int _strlen(const char *format)
{
	int len = 0;

	while (format[len] != '\0')
		len++;
	return (len - 1);
}
