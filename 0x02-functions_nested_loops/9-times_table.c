#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * This function calculates and prints the products of numbers from 0 to 9
 * multiplied by 0 to 9, forming the 9 times table.
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j == 0)
printf("%d, ", result);
else
{
printf("%2d", result);
if (j != 9)
printf(", ");
}
}
printf("\n");
}
}
