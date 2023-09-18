#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string parametre input
 * Return: void
 */

void rev_string(char *s)
{
int l, i;
for (i = 0 ; s[i] != '\0' ; i++)
l++;
for (i = 0 ; i < l / 2 ; i++)
{
char temp;
temp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = temp;
}
}
