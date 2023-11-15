/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:13 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/15 17:02:12 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_errors(char **numbers_array)
{
	int	i;

	i = -1;
	while (numbers_array[++i])
	{
		if (check_number_n_space_str(numbers_array[i]) == 0
			|| check_max_n_min_str(numbers_array[i]) == 0
			|| numbers_array[1][0] == '\0')
		{
			return (ft_putendl_fd("Error", 2), 0);
			return (ft_putendl_fd("Error", 2), 0);
		}
	}
	if (check_for_dups_str(numbers_array) == 0)
		return (ft_putendl_fd("Error", 2), 0);
	return (1);
}

void	create_stack(t_stack **stack, char **numbers_array)
{
	int	i;

	i = -1;
	while (numbers_array[++i])
		create_node(stack, numbers_array[i]);
	multiple_free("%b", numbers_array);
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
