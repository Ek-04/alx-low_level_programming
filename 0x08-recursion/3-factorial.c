#include<stdio.h>
/**
 *factorial - returns factorial of a given number
 *@n: the number
 *Return: -1 if the value is less than 0
 *1 else if the value is 0 otherwise  factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	putchar (n);
	return (factorial(n + 1));
	}
}
