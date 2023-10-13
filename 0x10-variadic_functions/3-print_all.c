#include "variadic_function.h"
/**
 * print_all - print any argument provided to function
 * @format: the argument specifier
 *
 * Return: any argument given based on format specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;

	char *str;
	va_list spc;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				check_stat = 0;
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(",");
		i++;
	}
	printf("\n");
	va_end(list);
}
