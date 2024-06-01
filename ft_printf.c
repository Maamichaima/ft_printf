/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:32:30 by cmaami            #+#    #+#             */
/*   Updated: 2023/11/27 20:56:12 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

int	type(char *c, va_list args)
{
	int	i;

	i = 0;
	if (*c == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (*c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (*c == 'd' || *c == 'i')
		i = ft_putnbr(va_arg(args, int));
	else if (*c == 'X')
		i = ft_putnbr_baseupp(va_arg(args, unsigned int));
	else if (*c == 'x')
		i = ft_putnbr_baselower(va_arg(args, unsigned int));
	else if (*c == 'p')
	{
		i = ft_putstr("0x");
		i += printf_p(va_arg(args, unsigned long));
	}
	else if (*c == 'u')
		i = ft_printf_u(va_arg(args, unsigned int));
	else
		i = write(1, &c, 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_strchr("sxXcupid", str[i]))
				count += type((char *)&str[i], args);
			else if (str[i] == '%')
				count += ft_putchar('%');
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
