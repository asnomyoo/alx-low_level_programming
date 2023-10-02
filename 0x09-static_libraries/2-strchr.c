#include "main.h"
/**
* _strchr -  locates a character in a string.
* @s: pointer to put the constant
* @c: constant
* Return: pointer to s
*/
char *_strchr(char *s, char c)
{
int R;
for (R = 0 ; s[R] >= '\0' ; R++)
{
if (s[R] == c)
{
return (s + R);
}
}
return ('\0');
}
