#include<string.h>
#include<stdlib.h>
/**
 **_strdup - returns pointer to nelly allocated space
 *@len: length of the string
 *@str: string to be checked
 *
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}
	size_t len = strlen(str);

	char* dup_str = (char*)malloc(len + 1);

	if (dup_str == NULL)
	{
	return (NULL);
	}
	strcpy (dup_str, str);

	return (dup_str);
}
