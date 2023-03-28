#include "main.h"
/**
 *_puts - prints a string folowed by anew line in stdout
 *@str: string
 *
 *
 */
void _puts(char *str)
{
	while (*str)
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
