/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshoma <kshoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:22:58 by kshoma            #+#    #+#             */
/*   Updated: 2023/10/02 17:50:49 by kshoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

static char	check_option(char line)
{
	if (line == 'c')
		return ('c');
	else if (line == 's')
		return ('s');
	else if (line == 'p')
		return ('p');
	else if (line == 'd')
		return ('d');
	else if (line == 'i')
		return ('i');
	else if (line == 'u')
		return ('u');
	else if (line == 'x')
		return ('x');
	else if (line == 'X')
		return ('x');
	else if (line == '%')
		return ('%');
	return (NULL);
}

int	operator(char type, va_list args)
{
	int len;

	len  = 0;
	if (type == 'c')
		len = ft_putchar(type_change(args, type));
	else if (type == 's')
		len = ft_putstr(type_change(args, type));
	else if (type == 'p')
		return ('p');
	else if (type == 'd')
		return ('d');
	else if (type == 'i')
		return ('i');
	else if (type == 'u')
		return ('u');
	else if (type == 'x')
		return ('x');
	else if (type == 'X')
		return ('x');
	else if (type == '%')
		return ('%');
	return (len);
}

int	ft_printf(const char *line, ...)
{
	va_list	args;
	size_t	i;
	int 	len;

	i = 0;
	len = 0;
	va_start(args, line);
	while (line[i])
	{
		if (line[i] == '%')
			operator(check_option(line[i + 1]), args);
		i++;
	}
	va_end(args);
	return (len);
}
