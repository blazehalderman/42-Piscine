/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:14:01 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/06 15:57:22 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*mix;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	mix = (int*)malloc(sizeof(*mix) * (max - min));
	while (min < max)
	{
		mix[i] = min;
		i++;
		min++;
	}
	return (mix);
}
