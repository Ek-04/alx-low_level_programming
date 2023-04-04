#include<string.h>
/**
 **_strchr - locates characters in a string
 *@s: string to be checked
 *@c: characters in te string
 *Return: pointer to the first occurence in c in string s
 *or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	}
	return (NULL);
}
