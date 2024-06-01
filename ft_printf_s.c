/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:23:19 by cmaami            #+#    #+#             */
/*   Updated: 2023/11/27 13:36:39 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	count = 0;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		count++;
		i++;
	}
	return (count);
}
