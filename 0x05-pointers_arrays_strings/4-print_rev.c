#include"main.h"
/**
 *print_rev - prints string in reverse followed by a new line
 *@s: string to be printed
 *
 */
void print_rev(char *s)
{
	while (*s)
	{
	putchar(*s);
	s--;
	}
	putchar('\n');
}
