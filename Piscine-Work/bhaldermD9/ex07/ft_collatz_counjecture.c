/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_counjecture.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 01:07:36 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/07 01:21:03 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base > 1)
	{
		if (base % 2 != 0)
			return (1 + ft_collatz_conjecture(base * 3 + 1));
		else
			return (1 + ft_collatz_conjecture(base / 2));
	}
	return (0);
}
