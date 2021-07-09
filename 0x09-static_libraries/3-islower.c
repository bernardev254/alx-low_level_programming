#include "holberton.h"
/**
*_islower - checks for lower case characters.
*@c: character to be checked
*Return:1 if the character is lowercase and o if not.
*/
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
