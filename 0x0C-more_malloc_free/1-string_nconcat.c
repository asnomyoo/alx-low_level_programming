#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *string_nconcat -  concatenates two strings
* @s1: first string
* @s2: second string
* @n: num usigned integer
* Return: s
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, s1_length, s2_length;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (s1_length = 0 ; s1[s1_length] != '\0' ; s1_length++)
;
for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
;
s = malloc(s1_length + n + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0 ; s1[i] != '\0' ; i++)
s[i] = s1[i];
for (j = 0 ; j < n ; j++)
{
s[i] = s[j];
i++;
}
s[i] = '\0';
return (s);
}
