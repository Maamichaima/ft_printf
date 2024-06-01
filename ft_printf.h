/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:33:59 by cmaami            #+#    #+#             */
/*   Updated: 2023/11/27 20:51:53 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr_baseupp(unsigned int nbr);
int	ft_putnbr_baselower(unsigned int nbr);
int	ft_putstr(char *s);
int	printf_p(unsigned long ptr);
int	ft_putnbr(int n);
int	ft_putchar(char s);
int	ft_printf_u(unsigned int n);
int	ft_printf(const char *str, ...);

#endif