#include <stdio.h>

void _putchar(char c)
{
putchar(c);
}

#include "main.h"

/**
 * _putchar - print character
 * main - main function
 * print_alphabet_x10 - print alphabet in lowercase 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
int i;
char j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 'a' ; j <= 'z' ; j++)
_putchar(j);
_putchar('\n');
}
}

int main(void)
{
print_alphabet_x10();
return (0);
}

