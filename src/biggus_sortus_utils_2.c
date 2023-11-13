/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggus_sortus_utils_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:49:04 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/13 17:14:28 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*find_min(t_stack *stack)
{
	t_stack	*min_node;
	long	min;

	if (!stack)
		return (NULL);
	min = INT_MAX;
	while (stack)
	{
		if (stack->nb < min)
		{
			min = stack->nb;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max_node;
	long	max;

	if (!stack)
		return (NULL);
	max = INT_MIN;
	while (stack)
	{
		if (stack->nb > max)
		{
			max = stack->nb;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack	*get_cheapest(t_stack *stack)
{
	if (!stack)
	{
		return (NULL);
	}
	while (stack)
	{
		if (stack->cheapest == true)
		{
			return (stack);
		}
		stack = stack->next;
	}
	return (NULL);
}

void	set_target_b(t_stack *a, t_stack *b)
{
	t_stack	*current_a_node;
	t_stack	*target;
	long	best_match;

	while (b)
	{
		best_match = LONG_MAX;
		current_a_node = a;
		while (current_a_node)
		{
			if (current_a_node->nb < best_match && current_a_node->nb > b->nb)
			{
				best_match = current_a_node->nb;
				target = current_a_node;
			}
			current_a_node = current_a_node->next;
		}
		if (best_match == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target;
		b = b->next;
	}
}

void	min_is_top(t_stack **a)
{
	while ((*a)->nb != find_max(*a)->nb)
	{
		if (find_min(*a)->above_median)
		{
			rotate_a(a);
		}
		else
		{
			reverse_rotate_a(a);
		}
	}
}
