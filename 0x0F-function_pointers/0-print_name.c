#include "function_pointers.h"

/**
 *print_name - entry
 *@name: ch
 *@f: pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
