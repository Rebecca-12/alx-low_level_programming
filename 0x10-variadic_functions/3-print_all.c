#include <stdarg.h>
#include <stdio.h>


/**
* print_all - Prints values based on a format string.
* @format: The format string specifying argument types.
* ...: Variable number of arguments based on the format.
*
* The format string can contain:
*   - 'c': a character
*   - 'i': an integer
*   - 'f': a float
*   - 's': a string (if NULL, prints "(nil)")
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			break;
			case 'f':
			printf("%g", va_arg(args, double)); /* Use %g for float formatting*/
			break;
			case 's':
			str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
	} else
	{
		printf("%s", str);
	}
		break;
		default:
		i++;
		continue;
	}
	if (format[i + 1] != '\0')
	{
		printf(", ");
	}
		i++;
	}
	va_end(args);

	printf("\n");
}
