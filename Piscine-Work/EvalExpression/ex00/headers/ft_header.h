/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:22:42 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/16 21:38:08 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
int		do_op(int num1, int num2, char op);
char	*elim_spaces(char *str);
int		ft_parse_nbr(char **pos);
int		ft_summands(char **pos);
int		ft_factors(char **pos);
int		eval_expr(char *str);
#endif
