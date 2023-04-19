#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - entry
 *@name: ch
 *@f: pointer
 *Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

/**
 *main - entry point
 *Return: 0
 */

int main(void)
{
return (0);
}
