/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:24 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:25 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_number_n_space_arr(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (check_number_n_space_str(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_max_n_min_arr(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (check_max_n_min_str(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_for_dups_arr(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (argv[j] != 0)
		{
			if (ft_atoi_change(argv[i]) == ft_atoi_change(argv[j]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
