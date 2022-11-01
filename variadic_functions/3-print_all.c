#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - Function that print all.
 * @format: the abreviations of data types of the arguments passed.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *strarg;

	if (format != NULL)
	{
		printf("\n");
		return;
	}
	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 's':
				strarg = va_arg(ap, char *);
				strarg ? printf("%s", strarg) : printf("(nil)");
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
		}
		if ((format[i] == 'f' || format[i] == 's'
				|| format[i] == 'i' || format[i] == 'c') && format[i + 1])
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(ap);
}
