#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: finds the first occurrence of the substring
 * Return:a pointer , or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0 ; haystack[i] > '\0'; i++)
{
for (j = i ; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
{
if (haystack[j] != needle[j - i])
{
break;
}
}
if (needle[j - i] == '\0')
{
return (haystack + i);
}
}
return (0);
}
