/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:13 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/13 09:19:31 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_errors(int argc, char **argv)
{
	if (argc == 2)
	{
		if (check_number_n_space_str(argv[1]) == 0
			|| check_max_n_min_str(argv[1]) == 0
			|| check_for_dups_str(argv[1]) == 0 || argv[1][0] == '\0')
		{
			ft_printf("Error");
			return (0);
		}
	}
	if (argc > 2)
	{
		if (check_number_n_space_arr(argc, argv) == 0
			|| check_max_n_min_arr(argc, argv) == 0 || check_for_dups_arr(argc,
				argv) == 0)
		{
			ft_printf("Error");
			return (0);
		}
	}
	return (1);
}

void	create_stack(t_stack **stack, int argc, char **argv)
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

bool	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->nb > stack->next->nb)
			return (false);
		stack = stack->next;
	}
	return (true);
}

int	ft_stacksize(t_stack *lst)
{
	int		count;
	t_stack	*ptr;

	ptr = lst;
	count = 0;
	if (lst == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

void	sort_three(t_stack **stack_a)
{
	t_stack	*biggest_node;

	if (!*stack_a)
	{
		return ;
	}
	biggest_node = find_max(*stack_a);
	if (biggest_node == *stack_a)
	{
		rotate_a(stack_a);
	}
	else if ((*stack_a)->next == biggest_node)
	{
		reverse_rotate_a(stack_a);
	}
	if ((*stack_a)->nb > (*stack_a)->next->nb)
	{
		swap_a(stack_a);
	}
}
