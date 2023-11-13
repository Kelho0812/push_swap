/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggus_sortus_utils_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:33:16 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/13 17:06:56 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	set_index_n_median(t_stack *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = ft_stacksize(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

void	set_target_a(t_stack *a, t_stack *b)
{
	t_stack	*current_b_node;
	t_stack	*target;
	int		best_match;

	while (a)
	{
		best_match = INT_MIN;
		current_b_node = b;
		while (current_b_node)
		{
			if (current_b_node->nb > best_match && current_b_node->nb < a->nb)
			{
				best_match = current_b_node->nb;
				target = current_b_node;
			}
			current_b_node = current_b_node->next;
		}
		if (best_match == INT_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target;
		a = a->next;
	}
}

void	set_cost_a(t_stack *a, t_stack *b)
{
	int	a_len;
	int	b_len;

	a_len = ft_stacksize(a);
	b_len = ft_stacksize(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = a_len - (a->index);
		if (a->target_node->above_median)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += b_len - (a->target_node->index);
		a = a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	t_stack	*cheapest_node;
	int		cheapest_cost;

	if (!stack)
	{
		return ;
	}
	cheapest_cost = INT_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_cost)
		{
			cheapest_cost = stack->push_cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	prepare_push(t_stack **stack, t_stack *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
			{
				reverse_rotate_a(stack);
			}
			else
			{
				rotate_a(stack);
			}
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
			{
				reverse_rotate_b(stack);
			}
			else
			{
				rotate_b(stack);
			}
		}
	}
}
