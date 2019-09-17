/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:18:35 by ppepperm          #+#    #+#             */
/*   Updated: 2019/08/18 18:19:41 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef int(*t_fptr)(int, int);

typedef struct			s_expr
{
	char				sign;
	short int			priv;
	t_fptr				func;
}						t_expr;

typedef struct			s_stack_num
{
	struct s_stack_num	*prior;
	int					num;
}						t_snum;

typedef struct			s_stack_expr
{
	struct s_stack_expr	*prior;
	t_expr				expr;
}						t_sexpr;

#endif
