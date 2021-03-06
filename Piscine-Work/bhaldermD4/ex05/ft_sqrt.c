/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.us.42.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 20:32:39 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/01 23:14:41 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb == 1)
		return (1);
	i = nb / 2;
	while (i > 1)
	{
		if (nb % i == 0)
		{
			if (i * i == nb)
			{
				return (i);
			}
		}
		i--;
	}
	return (0);
}
