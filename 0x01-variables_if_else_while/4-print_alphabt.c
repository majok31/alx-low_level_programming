#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 always
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
		{
		       putchar(i);
		}
	}
	putchar('\n');
		return (0);
}
