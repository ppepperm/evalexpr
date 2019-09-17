/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 12:09:38 by ppepperm          #+#    #+#             */
/*   Updated: 2019/08/18 18:23:23 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_calc_lib.h"
#include "types.h"

void	ft_pns(t_snum **stack_top, int num)
{
	t_snum	*tmp;

	tmp = (t_snum*)malloc(sizeof(t_snum));
	tmp->prior = *stack_top;
	tmp->num = num;
	*stack_top = tmp;
}

int		ft_puns(t_snum **stack_top)
{
	int		tmp;
	t_snum	*tmp_head;

	tmp = (*stack_top)->num;
	tmp_head = (*stack_top)->prior;
	free(*stack_top);
	*stack_top = tmp_head;
	return (tmp);
}

void	ft_pes(t_sexpr **stack_top, t_expr expr)
{
	t_sexpr	*tmp;

	tmp = (t_sexpr*)malloc(sizeof(t_sexpr));
	tmp->prior = *stack_top;
	tmp->expr = expr;
	*stack_top = tmp;
}

t_expr	ft_init_expr(t_expr expr, int priv, char sign, t_fptr f)
{
	expr.sign = sign;
	expr.priv = priv;
	expr.func = f;
	return (expr);
}

t_expr	ft_pues(t_sexpr **stack_top)
{
	t_expr	tmp;
	t_sexpr	*tmp_head;

	tmp = (*stack_top)->expr;
	tmp_head = (*stack_top)->prior;
	free(*stack_top);
	*stack_top = tmp_head;
	return (tmp);
}
