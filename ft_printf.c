#include <stdarg.h>

int check_flag()
{
	-
	0
	.
	*
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		inc_num;

	i = 0;
	while (format[i++] != '\0')
	{
		if (format[i] == '%')
		{
			inc_num = check_flag();
			i += inc_num;
		}
	}

	va_start(ap, format);
	va_end(ap);
}
