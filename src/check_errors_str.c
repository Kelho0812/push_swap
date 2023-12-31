/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:22 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:06 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_number_n_space_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
		{
			if (str[i] != ' ' && str[i] != '+' && str[i] != '-')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	check_max_n_min_str(char *str)
{
	ft_atoi_change(str);
	if (ft_atoi_change(str) < -2147483648 || ft_atoi_change(str) > 2147483647)
	{
		return (0);
	}
	return (1);
}

int	check_for_dups_str(char **str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[++j])
		{
			if (i != j && ft_atoi_change(str[i]) == ft_atoi_change(str[j]))
				return (0);
		}
	}
	return (1);
}
