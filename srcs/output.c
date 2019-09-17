/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:27:41 by ppepperm          #+#    #+#             */
/*   Updated: 2019/08/18 22:02:29 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc_lib.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != ' ' && *str != '\0' && *str != '(' && *str != ')')
	{
		str++;
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int mult;
	int nb;

	mult = 1;
	nb = 0;
	while ((*str == ' ') || (*str == '\t'))
		str++;
	if (*str == '-')
	{
		str++;
		mult = -1;
	}
	if (*str == '+')
		str++;
	while (*str != '\0' || *str != ' ')
	{
		if ((*str < '0') || (*str > '9'))
			return (nb * mult);
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * mult);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb / 10 == 0)
	{
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

t_expr	*ft_init_ops(void)
{
	t_expr *tmp;

	tmp = (t_expr*)malloc(sizeof(t_expr) * 8);
	tmp[0] = ft_init_expr(tmp[0], 1, '+', ft_inc);
	tmp[1] = ft_init_expr(tmp[1], 1, '-', ft_dec);
	tmp[2] = ft_init_expr(tmp[2], 2, '*', ft_mult);
	tmp[3] = ft_init_expr(tmp[3], 2, '/', ft_div);
	tmp[4] = ft_init_expr(tmp[4], 2, '%', ft_mod);
	tmp[5] = ft_init_expr(tmp[5], 3, '(', NULL);
	tmp[6] = ft_init_expr(tmp[6], 4, ')', NULL);
	tmp[7] = ft_init_expr(tmp[7], -2, 'X', ft_inc);
	return (tmp);
}
