#include <stdio.h>

/**
* largest_number - program prints the largest of three integers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && b >= c)
{
largest = a;
}
else if (b > a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
