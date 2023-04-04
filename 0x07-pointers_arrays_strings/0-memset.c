#include<string.h>
/**
 **_memset - fills memory wit constant byte
 *@s: the variable to be copied into
 *@b: size of the count
 *@n: value of te usigned character
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
