#include<string.h>
/**
 **_memcpy - copies memory area
 *@dest: content to be cpied into
 *@src: cntent to be copied
 *Return: (0)
 *@n: size of the count
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (0);
}
