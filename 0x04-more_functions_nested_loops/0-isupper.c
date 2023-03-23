#include"main.h"
/**
 *_isupper - checks for uppercase characters
 *Return: i if number is a digit otherwise 0
 *@c: is number to be checked
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
