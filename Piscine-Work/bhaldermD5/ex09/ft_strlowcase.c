/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:38:27 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/04 21:11:27 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 65 && str[index] <= 90))
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
