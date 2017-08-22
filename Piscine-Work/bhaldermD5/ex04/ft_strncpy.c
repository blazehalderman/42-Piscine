/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:29:33 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/04 20:37:40 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		f;
	char	x;

	f = n;
	i = 0;
	while (src[i] != '\0' && i != f)
	{
		x = src[i];
		dest[i] = x;
		i++;
	}
	while (i < f)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
