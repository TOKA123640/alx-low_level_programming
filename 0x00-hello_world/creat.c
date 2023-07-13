#!/bin/bash

echo 'input file name'
read var

echo -e '#include <stdio.h>\n' > ${var}
echo '/**
* main - Entry Point
* Return: Always 0 (success)
*/
int main(void)
{

return (0);
}' >> ${var}
chmod u+x ${var}
vi ${var}
