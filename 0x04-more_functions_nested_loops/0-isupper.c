#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @C: function parameter
 * Return: 1 success or 0
 */
int _isupper(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}
