/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <kchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:34:01 by kchan             #+#    #+#             */
/*   Updated: 2017/07/09 23:04:53 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}