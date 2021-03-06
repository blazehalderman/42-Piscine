/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:46:25 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/12 20:33:30 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = *begin_list;
	while (i < nbr)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
