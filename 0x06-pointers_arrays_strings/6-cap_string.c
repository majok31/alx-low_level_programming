#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str:the string to be capitalized
 * Return: a pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (!(str[index] >= 'a' && str[index] <= 'Z'))
		{
			if (index == 0 ||
					strchr(" \t\n,;.!?\"(){}", str[index - 1]))
			{
				str[index] -= 32;
			}
		}
	index++;
	}
	return (str);
}

