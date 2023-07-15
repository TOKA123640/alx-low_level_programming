#include <stdio.h>

/**
* main - Entry Point
* Description: false or true validation
* Return: Always 0 (success)
*/
int main(void)
}
int digit = 0;
while (digit <= 9)
{
putchar(digit + 48);
if (digit != 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n')
return (0);
}
