#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char a, b;
for (a = 0 ; a <= 100 ; a++)
{
for (b = 0 ; b <= 100 ; b++)
{
putchar(a);
putchar(b);
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
