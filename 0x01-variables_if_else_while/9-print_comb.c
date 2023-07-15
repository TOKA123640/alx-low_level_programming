#include <stdio.h>

/**
* main - Entry Point
* Description: print comb of numbers
* Return: Always 0 (success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + 48);
if (digit != 9)
{
putchar(',');
putchar(' ');
}
putchar('\n')
return (0);
}
