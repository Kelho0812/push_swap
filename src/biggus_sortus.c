/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggus_sortus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:49:17 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/13 17:15:21 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	biggus_sortus(t_stack **a, t_stack **b)
{
	int	len_a;

	len_a = ft_stacksize(*a);
	if (len_a-- > 3 && !is_sorted(*a))
	{
		push_b(a, b);
	}
	if (len_a-- > 3 && !is_sorted(*a))
	{
		push_b(a, b);
	}
	while (len_a-- > 3 && !is_sorted(*a))
	{
		prepare_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		prepare_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	set_index_n_median(*a);
	min_is_top(a);
}

void	prepare_nodes_a(t_stack *a, t_stack *b)
{
	set_index_n_median(a);
	set_index_n_median(b);
	set_target_a(a, b);
	set_cost_a(a, b);
	set_cheapest(a);
}

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
	{
		while (*a != cheapest_node)
		{
			rr(a, b);
		}
		set_index_n_median(*a);
		set_index_n_median(*b);
	}
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
	{
		while (*a != cheapest_node)
		{
			rrr(a, b);
		}
		set_index_n_median(*a);
		set_index_n_median(*b);
	}
	prepare_push(a, cheapest_node, 'a');
	prepare_push(b, cheapest_node->target_node, 'b');
	push_b(a, b);
}

void	prepare_nodes_b(t_stack *a, t_stack *b)
{
	set_index_n_median(a);
	set_index_n_median(b);
	set_target_b(a, b);
}

void	move_b_to_a(t_stack **a, t_stack **b)
{
	prepare_push(a, (*b)->target_node, 'a');
	push_a(a, b);
}
