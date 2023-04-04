#include<string.h>
/**
 **_strstr - locates the substring characters of string hasack
 *@haystack: the string to be searched
 *@needle:the substring to se arch for
 *Return: pointer to the beggining of the located substring
 *or returns NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] !=  '\0'; j++)
	{
	if (haystack[i + j] == '\0')
	{
		break;
	}
	if (needle[j] == '\0')
	{
	return (&haystack[i]);
	}
	}
	}
	return (NULL);
}
