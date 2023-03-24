#include"main.h"
/**
 *more_numbers - prints numbers from 0 to 14 ten times
 *followed by new line
 *
 */
void more_numbers(void)
{
	char c;
	int i;

	while (i < 10)
	{
		for (c = 0 ; c < 14 ; c++)
		{
			_putchar(c);
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
