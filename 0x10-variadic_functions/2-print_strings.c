#include "variadic_functions.h"

/**
 * asd asd asdasd
 * asda
 * sd
 * as
 * dasd
 *
 * asd
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
        int i = n;
	char *str;
        va_list ap;

        if (!n)
        {
                printf("\n");
                return;
        }
        va_start(ap, n);
        while (i--)
                printf("%s%s", (str = va_arg(cp, char *)) ? str : "(nil)"),
			i ? (separator ? separator : "") : "\n";
        va_end(ap);
}
