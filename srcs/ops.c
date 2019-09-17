/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:16:17 by ppepperm          #+#    #+#             */
/*   Updated: 2019/08/18 10:50:42 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc_lib.h"

int	ft_mult(int b, int a)
{
	return (a * b);
}

int	ft_inc(int b, int a)
{
	return (a + b);
}

int	ft_dec(int b, int a)
{
	return (a - b);
}

int	ft_div(int b, int a)
{
	return (a / b);
}

int	ft_mod(int b, int a)
{
	return (a % b);
}
