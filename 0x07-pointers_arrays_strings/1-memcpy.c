#include<string.h>
/**
 **_memcpy - copies memory area
 *@dest: content to be cpied into
 *@src: cntent to be copied
 *Return: *original_dest
 *@n: size of the count
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original_dest);
}
