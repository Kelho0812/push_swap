/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:58 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:47 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_b(n_list **stack_b)
{
	n_list	*tmp;

	if (*stack_b && (*stack_b)->next)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = tmp->next;
		tmp->next->previous = (*stack_b);
		(*stack_b)->previous = tmp;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	printf("sb\n");
}

void	rotate_b(n_list **stack_b)
{
	n_list	*tmp;

	if (*stack_b && (*stack_b)->next)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_b)->previous = NULL;
		tmp->next = NULL;
		tmp->previous = get_last_node(*stack_b);
		get_last_node(*stack_b)->next = tmp;
	}
	printf("rb\n");
}

void	reverse_rotate_b(n_list **stack_b)
{
	n_list	*tmp;
	n_list	*last_node;

	if (*stack_b && (*stack_b)->next)
	{
		last_node = get_last_node(*stack_b);
		tmp = (*stack_b);
		last_node->previous->next = NULL;
		last_node->next = tmp;
		last_node->previous = NULL;
		tmp->previous = last_node;
		*stack_b = last_node;
	}
	printf("rrb\n");
}
