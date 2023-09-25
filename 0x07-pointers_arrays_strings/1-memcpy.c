#include "main.h"
/**
* _memcpy - copies memory area
* @n: length of src to be copied
* @src: source
* @dest: memory area
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int R;
for (R = 0 ; n > R ; R++)
{
dest[R] = src[R];
}
return (dest);
}

