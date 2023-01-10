#include "main.h"
/**
*_isupper - A function that checks for uppercase character.
*@c: An input character.
*Return: 1 if c is uppercase or 0 otherwise.
*/
int _isupper(int c)
{
int upper;
if (c <= 'Z')
upper = 1;
else
upper = 0;
return (upper);
}
