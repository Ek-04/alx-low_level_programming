#include<stdio.h>
/**
 *main - checks code
 *print_alphabet_x10 - prints alphabet in lowercase ten times
 *followed by a new line
 *
 */
void print_alphabet_x10(void);
{
char letter;
int i;
while (i < 10)
{
letter = 'a'

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar("\n");
i++;
}
}
