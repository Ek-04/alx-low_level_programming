#include "main.h"

/**
 * _puts - Entry
 * @str: Print
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
