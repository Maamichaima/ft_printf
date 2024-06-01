/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:23:21 by cmaami            #+#    #+#             */
/*   Updated: 2023/11/27 15:24:17 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_baseupp(unsigned int nbr)
{
	char	*p;
	int		i;

	p = "0123456789ABCDEF";
	i = 0;
	if (nbr <= 15)
	{
		i += ft_putchar(p[nbr]);
	}
	else if (nbr > 15)
	{
		i += ft_putnbr_baseupp(nbr / 16);
		i += ft_putnbr_baseupp(nbr % 16);
	}
	return (i);
}

int	ft_putnbr_baselower(unsigned int nbr)
{
	char	*p;
	int		i;

	p = "0123456789abcdef";
	i = 0;
	if (nbr <= 15)
	{
		i += ft_putchar(p[nbr]);
	}
	else if (nbr > 15)
	{
		i += ft_putnbr_baselower(nbr / 16);
		i += ft_putnbr_baselower(nbr % 16);
	}
	return (i);
}
