/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:13 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:13 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_errors(int argc, char **argv)
{
	if (argc == 2)
	{
		if (check_number_n_space_str(argv[1]) == 0
			|| check_max_n_min_str(argv[1]) == 0
			|| check_for_dups_str(argv[1]) == 0)
		{
			printf("Error");
			return (0);
		}
	}
	if (argc > 2)
	{
		if (check_number_n_space_arr(argc, argv) == 0
			|| check_max_n_min_arr(argc, argv) == 0 || check_for_dups_arr(argc,
				argv) == 0)
		{
			printf("Error");
			return (0);
		}
	}
	return (1);
}

void	create_stack(n_list **stack, int argc, char **argv)
{
	if (argc == 2)
	{
		create_stack_str(stack, argv[1]);
	}
	else
	{
		create_stack_arr(stack, argc, argv);
	}
}
