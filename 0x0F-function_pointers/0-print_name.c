#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function prints a name
 * @name: Variable type char
 * @f: Pointer to a function
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}