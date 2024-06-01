/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:29:31 by cmaami            #+#    #+#             */
/*   Updated: 2023/11/27 20:52:18 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_p(unsigned long ptr)
{
	char	c;
	int		i;
	char	*s;

	s = "0123456789abcdef";
	i = 0;
	if (ptr < 16)
	{
		c = s[ptr];
		write(1, &c, 1);
		i++;
	}
	else
	{
		i += printf_p(ptr / 16);
		i += printf_p(ptr % 16);
	}
	return (i);
}
