#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@separator: string arg
 *@n:no
 *
 *Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
if (!separator)
printf("%s", str);
else if (separator == 0 && i == 0)
printf("%s%s", separator, str);
}
printf("\n");
va_end(ap);
}
