#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
* struct_op - structure
*@ch: type
*@f: function
*/
typedef struct op
{
  char *ch;
  void (*f)(va-list arg);
} op_t;
int add_them_all(const unsigned int n, ...);
int _putchar(char *c);
#endif
