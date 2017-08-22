/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:23:36 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/12 21:06:54 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list)
	{
		if (begin_list->next == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
