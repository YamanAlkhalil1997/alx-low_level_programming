#include "variadic_functions.h"
/**
 * asd asd asd
 * as
 * d
 * asd
 * a
 * sd
 * a
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * asd
 * a
 * sd
 *
 * asd
 * a
*/
void format_int(char *separator, va_arg(ap, int))
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * asd asd
 * as
 * d
 * asd
*/
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1;
			str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 * asd asd
 *
 * asd
 * a
 * sd
 * asd
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		i = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap)
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}