#include "3-calc.h"

/**
 * main - A mini calculator
 * @argc: number of variables
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	int a, b;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	f = get_op_func(op);

	if (f)
	{
		result = f(a, b);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
