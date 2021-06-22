#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 *
 * @n: Value of the incognit
 *
 * Return: Always 0.
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
	}
}
