#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:string
 * @accept: any of the bytes in the string
 * Return: pointer to the byte in s in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int R, Q;
char *p;
R = 0;
while (s[R] != '\0')
{
Q = 0;
while (accept[Q] != '\0')
{
if (accept[Q] == s[R])
{
p = &s[R];
return (p);
}
Q++;
}
R++;
}
return (0);
}
