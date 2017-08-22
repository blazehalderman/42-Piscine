/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:43:16 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/06 19:47:22 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int ft_time(int hour)
{
    if (hour >= 12 && hour != 24)
	{
		printf("%s","THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d", hour);
		printf("%s", " P.M.");
		printf("%s", " and ");
		printf("%d", hour + 1);
		printf("%s", "P.M.");
		return(0);
	}
	else if (hour == 11)
	{
		printf("%s","THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d", 12);
		printf("%s", " A.M.");
		printf("%s", " and ");
		printf("%d", hour + 1);
		printf("%s", "P.M.");
		return (0); 
	}
	else if(hour == 24)
	{
		printf("%s","THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d", hour);
		printf("%s", " P.M.");
		printf("%s", " and ");
		printf("%d", hour + 1);
		printf("%s", "A.M.");
		return (0); 
	}
	else
	{
		printf("%s","THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d", hour);
		printf("%s", " A.M.");
		printf("%s", " and ");
		printf("%d", hour + 1);
		printf("%s", "A.M.");
		return (0);
	}
}

void    ft_takes_place(int hour)
{
    char *clock;

    if (hour >= 12 && hour != 1)
    {
        hour %= 12;
        ft_time(hour);
    }
    else 
    {
		hour %12;
		ft_time(hour);
    }
}

int main(void)
{
    ft_takes_place(24);
    return (0);
}


