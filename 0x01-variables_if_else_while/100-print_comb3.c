#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b;
for (a = '0' ; a <= '8' ; a++)
{
for (b = '1' ; b <= '9' ; b++)
{
putchar(b);
putchar(',');
putchar(' ');

}
 putchar(a);
}
putchar('\n');
return (0);
}
