#include <stdio.h>

// Function that prints a name
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

// Function that prints name in uppercase

void print_name_uppercase(char *name)
{
	for (int i = 0; name[i]; i++) 
	{
	putchar(toupper(name[i]));
	}
	putchar('\n');
}

// Function that prints name in lowercase

void print_name_lowercase(char *name)
{
 	for (int i = 0; name[i]; i++)
	{
	putchar(tolower(name[i]));
	}
	putchar('\n');
}

int main() {
	char name[] = "John Doe";

	// Using print_name function with print_name_uppercase and print_name_lowercase function pointers
	printf("Name: %s\n", name);
	printf("Uppercase: ");
	print_name(name, print_name_uppercase);
	printf("Lowercase: ");
	print_name(name, print_name_lowercase);

	return 0;
}

