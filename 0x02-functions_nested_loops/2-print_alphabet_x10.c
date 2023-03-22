#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
