#include<string.h>
/**
 **_strpbrk - searches string s for any set of bytes of characters in accept
 *@s: string to be checked
 *@accept: string containing the characers allowed in prefix of s
 *Return: a pointer to the byte in s if accept character s found and returns NULL if not
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			return &s[i];
		}
	}
		}
return (NULL);
}
