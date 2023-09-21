#include "main.h"

/**
*reverse_array - function that reverses the content of an array of integers
*@n: the number of elements of the array
*@a: array ofintegers
* Return: void
*/
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0 ; i < n / 2 ; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}

}
