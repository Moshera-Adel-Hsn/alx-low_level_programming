#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
char alpha;
num = '0';
alpha ='a';
while (num <= '9')
{
putchar(num);
num++;
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
