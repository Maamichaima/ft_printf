/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:56:21 by cmaami            #+#    #+#             */
/*   Updated: 2023/11/27 13:37:47 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_printf_u(n / 10);
		i += ft_printf_u(n % 10);
	}
	else
		i += ft_putchar(n + 48);
	return (i);
}
