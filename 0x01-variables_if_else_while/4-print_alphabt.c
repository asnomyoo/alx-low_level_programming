#include <stdio.h>
/**
* main - Entry point
*
* Description: print all alphabet lettres except q and e
*
* Return: Always 0 (Seccess)
*/
int main(void)
{
char i = 'a';
while (i <= 'z')
{
if (i == 'e' || i == 'q')
i++;
putchar(i);
i++;
}
putchar('\n');
return (0);
}
