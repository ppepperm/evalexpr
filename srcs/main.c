/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:39:14 by ppepperm          #+#    #+#             */
/*   Updated: 2019/08/18 18:38:52 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc_lib.h"

int		ft_final_pull(t_sexpr **expr, t_snum **num, char c)
{
	while (((*expr)->expr).sign != c)
		ft_pns(num, ft_pues(expr).func(ft_puns(num), ft_puns(num)));
	return ((*num)->num);
}

void	ft_push_op(t_sexpr **expr, t_snum **num, t_expr op)
{
	int flag;

	flag = 1;
	while (flag)
	{
		if (op.priv == 4)
		{
			while (((*expr)->expr).priv != 3)
				ft_pns(num, ft_pues(expr).func(ft_puns(num), ft_puns(num)));
			ft_pues(expr);
			flag = 0;
			continue;
		}
		if (op.priv > ((*expr)->expr).priv || ((*expr)->expr).priv == 3)
		{
			ft_pes(expr, op);
			flag = 0;
		}
		else
			ft_pns(num, ft_pues(expr).func(ft_puns(num), ft_puns(num)));
	}
}

int		eval_expr(char *str)
{
	t_expr		*ops;
	t_snum		*num;
	t_sexpr		*expr;
	int			i;

	ops = ft_init_ops();
	ft_pes(&expr, ops[7]);
	while (*str)
	{
		i = 0;
		if (*str >= '0' && *str <= '9')
		{
			ft_pns(&num, ft_atoi(str));
			str += ft_strlen(str);
			continue ;
		}
		if ((*str < '0' || *str > '9') && *str != ' ')
		{
			while (ops[i].sign != *str)
				i++;
			ft_push_op(&expr, &num, ops[i]);
		}
		str++;
	}
	return (ft_final_pull(&expr, &num, 'X'));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
