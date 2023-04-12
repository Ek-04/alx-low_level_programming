#include<stdio.h>
#include<stdlib.h>
/**
 **create_array - creates an array of chars
 *Reurn: NULL if size is zero otherwise return
 *Return: array
 *@size: size of the bytes of memory
 *@c: character to be stored
 *
 */
char *create_array(unsigned int size, char c)
{

	char *array = (char *)malloc(size * sizeof(char));
	
	if (size == 0)
	{
	return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	unsigned int;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

