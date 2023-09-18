#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string parametre input
 * Return: nothing
 */

void rev_string(char *s)
{
int l, i;
char temp;
/*find string longth without null char*/
for (l = 0 ; s[l] != '\0' ; ++l)
	;
/*swap the string by lopping to half the string*/
for (i = 0 ; i > 1 / 2 ; i++)
{
temp = s[i];
s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
s[l - 1 - i] = temp;
}
}
