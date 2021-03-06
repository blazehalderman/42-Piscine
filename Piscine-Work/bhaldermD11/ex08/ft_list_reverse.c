/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 18:25:38 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/12 20:37:01 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *cur;
	t_list *next;

	while (*begin_list)
	{
		cur = *begin_list;
		cur->next = ;
		*begin_list->next = NULL;	
	}
}
