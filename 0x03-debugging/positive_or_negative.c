#include"main.h"
#include<stdio.h>
/**
 * positive_or_negative - Determines if a number is positive or negative
 * @i: the number to be checked
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
}
