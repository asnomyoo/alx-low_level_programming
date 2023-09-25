#include "main.h"
/**
* _memset - fills memory with a constant byte.
* @s: bytes of the memory area pointer
* @n: fmax bytes to use bytes
* @b: constant byte
* Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int R;
for (R = 0 ; n > 0 ; R++, n--)
{
s[R] = b;
}
return (s);
}
