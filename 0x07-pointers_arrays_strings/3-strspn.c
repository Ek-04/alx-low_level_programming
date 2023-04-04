#include<string.h>
/**
 *_strspn - determines the length of a prefix substring
 *@s: string to be examined
 *@accept: characters of the prefix allowed in string s
 *Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
		break;
	}
	if (accept[j] == '\0')

		break;
	}
	return (i);
}
