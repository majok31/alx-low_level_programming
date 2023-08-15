#include "main.h"

/**
 *print_sign - prints sign of number
 *@n: function parameter
 *Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (10);
	}
	else if (n == 0)
	{
	_putchar(0);
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
