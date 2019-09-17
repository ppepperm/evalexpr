/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:58:38 by ppepperm          #+#    #+#             */
/*   Updated: 2019/08/18 21:59:09 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALC_LIB_H
# define FT_CALC_LIB_H
# include "types.h"
# include <stdlib.h>

void	ft_pns(t_snum **stack_top, int num);
int		ft_puns(t_snum **stack_top);
void	ft_pes(t_sexpr **stack_top, t_expr expr);
t_expr	ft_pues(t_sexpr **stack_top);
int		ft_mult(int b, int a);
int		ft_inc(int b, int a);
int		ft_dec(int b, int a);
int		ft_div(int b, int a);
int		ft_mod(int b, int a);
void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
t_expr	ft_init_expr(t_expr expr, int priv, char sign, t_fptr f);
t_expr	*ft_init_ops(void);
int		ft_strlen(char *str);

#endif
