#include<stdio.h>
/**
 *_print_rev_recursion -prints string in reverse
 *@s: string to be printed
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	putchar (*s);
	_print_rev_recursion(s + 1);
}
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	char s[10];

	_print_rev_recursion(s);
	putchar ('\n');
	return (0);
}
