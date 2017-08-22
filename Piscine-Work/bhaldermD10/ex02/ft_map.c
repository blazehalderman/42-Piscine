/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:57:33 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/10 16:57:46 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
  int *sort;
  int i;

  i = 0;
  sort = (int*)malloc(sizeof(*tab) * (length));
  while(i < length)
  {
    sort[i] = f(tab[i]);
    i++;
  }
  return (sort);
}
