#include "main.h"

/**
* _sqrt_recursion- returns the natural square root of a number.
*@n: int
*@i: square root
*Return: int
*/
int square(int n, int i);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
* square - find square root
*@n: int to find square root
*@i: square root
*Return: int
*/

int square(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i < n)
return (square(n, i + 1));
else
return (-1);
}
