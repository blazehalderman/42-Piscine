/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:38:07 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/04 20:58:34 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 97 && str[index] <= 122))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
