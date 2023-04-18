#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    strcpy(my_dog.name = "Poppy");
    my_dog.age = 3.5;
    strcpy(my_dog.owner = "Bob");
    printf("My name is %c, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
