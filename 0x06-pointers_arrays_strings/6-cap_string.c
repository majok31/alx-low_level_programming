#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str:the strig to be capitalized
 * Return:a pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'Z'))
			index++;
		if (str[index -1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index -1] == '\n'' ||
			str[index -1] == ',' ||
			str[index -1] == ';' ||
			str[index -1] == '.' ||
			str[index -1] == '!' ||
			str[index -1] == '?' ||
			str[index -1] == '"' ||
			str[index -1] == '(' ||
			str[index -1] == ')' ||
			str[index -1] == '{' ||
			str[index -1] == '}' ||
			index == 0)
			str[index] -= 32;

		index++;
	}
	return (str);
}
