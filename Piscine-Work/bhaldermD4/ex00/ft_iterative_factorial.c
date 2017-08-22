/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 14:44:27 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/01 23:21:52 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	if (i > 12)
		return (0);
	while (i > 1)
	{
		i--;
		nb *= i;
	}
	return (nb);
}
