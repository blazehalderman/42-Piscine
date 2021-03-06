/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 21:15:01 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/01 22:47:01 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = nb / 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i > 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i--;
	}
	return (1);
}
