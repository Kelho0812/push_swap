/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:58:44 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/13 16:56:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || !argv[1][0] || check_errors(argc, argv) == 0)
		return (0);
	create_stack(&stack_a, argc, argv);
	if (!is_sorted(stack_a))
	{
		if (ft_stacksize(stack_a) == 2)
			swap_a(&stack_a);
		else if (ft_stacksize(stack_a) == 3)
			sort_three(&stack_a);
		else
			biggus_sortus(&stack_a, &stack_b);
	}
	free_list_function(&stack_a);
	return (0);
}
