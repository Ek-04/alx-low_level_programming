#include "3-calc.h"

/**
 * op_add - Function that adds two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that subtracts two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that gets the modulus of two numbers
 * @a : first integer
 * @b : second integer
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

