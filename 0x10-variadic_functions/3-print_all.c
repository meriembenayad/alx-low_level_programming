/**
 * print_all - Function that prints anything
 * @format: type of args
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);

	printf("\n");
}
