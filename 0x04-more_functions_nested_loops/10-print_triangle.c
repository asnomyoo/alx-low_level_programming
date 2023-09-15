#include "main.h"
/**
* print_triangle - Prints a triangle made of '#' characters.
* @size: is the size of the triangle
* @_putchar - function to print
* @#: print the triangle
* Return: 0
*/
void _putchar(char c)
{
_putchar(c);
}
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int i = 1; i <= size; i++)
{
for (int j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (int k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
