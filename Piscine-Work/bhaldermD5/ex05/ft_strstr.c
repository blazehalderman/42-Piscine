/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:31:19 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/04 20:50:53 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		assigment(int *pos, int *i, int *ins, char *to_find)
{
	*pos = 0;
	*i = 0;
	*ins = 0;
	if (to_find[0] == '\0')
		return (1);
	return (0);
}

void	shorter_code(int *pos, int *wh, int *ins)
{
	*pos = *wh;
	*ins = *wh;
}

void	shorter_code3(int *ins, int *i)
{
	*ins = *ins + 1;
	*i = *i + 1;
}

void	shorter_code2(int *wh, int *i)
{
	*wh = *wh + 1;
	*i = 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	i;
	int	ins;
	int	wh;

	wh = 0;
	if (assigment(&pos, &i, &ins, to_find) == 1)
		return (str);
	while (str[i] != '\0')
	{
		if (str[wh] == to_find[i])
		{
			shorter_code(&pos, &wh, &ins);
			while (str[ins] == to_find[i])
			{
				if (to_find[i + 1] == '\0')
					return (str + pos);
				shorter_code3(&ins, &i);
			}
		}
		if (str[wh + 1] == '\0')
			return (0);
		shorter_code2(&wh, &i);
	}
	return (0);
}
