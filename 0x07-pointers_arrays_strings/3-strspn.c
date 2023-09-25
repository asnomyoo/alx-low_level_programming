#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: bytes
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int R, Q;
for (R = 0 ; s[R] != '\0' ; R++)
{
for (Q = 0 ; accept[Q] != s[R] ; Q++)
{
if (accept[Q] == '\0')
return (R);
}
}
return (R);
}
