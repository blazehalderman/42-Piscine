/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:48:58 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/01 18:35:53 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int x;

	x = nb;
	i = power;
	if (i == 1)
	{
		return (x);
	}
	if (i == 0)
	{
		return (1);
	}
	if (i < 0)
	{
		return (0);
	}
	while (i > 1)
	{
		i--;
		nb *= x;
	}
	return (nb);
}
