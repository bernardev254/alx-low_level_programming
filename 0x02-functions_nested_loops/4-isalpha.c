#include "holberton.h"
/**
*_isalpha - checks for alphabet characters
*
*Returns 1 if the character is an alphabet and 0 if not.
*/
int _isalpha(int c)
{
return ((c >= 'a') && (c <= 'z')) || (c >= 'A') && (c <='Z'));
}
  
