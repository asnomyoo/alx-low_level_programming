#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *string_nconcat -  concatenates two strings
* @s1: pointer to 1 string
* @s2: pointer to 2 string
* @n: num of bytes from n2 to contcatenate
* Return: pointer space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, len1, len2;
len1 = strlen(s1);
len2 = strlen(s2);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0 ; s1[len1] != '\0' ; len1++)
;

for (len2 = 0; s2[len2] != '\0'; len2++)
;
s = malloc(len1 + n + 1);
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
