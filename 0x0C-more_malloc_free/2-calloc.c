#include <stdlib.h>
#include "main.h"

/**
* *_memset - fills memory with a constant byte
*@s: memory erea to be filled
*@b: char to copy
*@n: number of times to copu b
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: array length
 * @size: size of element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);
if (m == 0)
return (NULL);
_memset(m, 0, nmemb * size);
return (m);
}
