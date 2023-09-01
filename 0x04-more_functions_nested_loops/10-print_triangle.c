#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
_putchar(' ');
for (j = 0; j <= i; j++)
_putchar('#');
_putchar('\n');

}
}
}

