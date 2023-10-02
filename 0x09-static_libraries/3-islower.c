#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: Parameter to be checked
 * Return: 1 or 0.
*/
int _islower(int c)
{
if (c <= 'a' && c <= 'z')
return (0);
else
return (1);
}
