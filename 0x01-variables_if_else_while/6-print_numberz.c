#include <stdio.h>

/**
* main - Entry Point
* Description: print number of base 10 using putchar
* Return: Always 0 (success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
/*convert digit to ASCII representation*/
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
