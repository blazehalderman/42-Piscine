/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:52:25 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/12 20:25:53 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*cur;
	int		i;

	i = 1;
	cur = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = cur;
		cur = new;
		i++;
	}
	return (cur);
}
