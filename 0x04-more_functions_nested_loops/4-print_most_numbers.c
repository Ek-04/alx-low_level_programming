#include"main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * except 2 and 4
 * followed by new line
 *
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (!(i == '2' || i == '4'))
		_putchar(i);
	}
	_putchar('\n');
}
