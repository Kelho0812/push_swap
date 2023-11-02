/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:02 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:32:53 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(n_list **stack_a)
{
	n_list	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next->previous = (*stack_a);
		(*stack_a)->previous = tmp;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	printf("sa\n");
}

void	rotate_a(n_list **stack_a)
{
	n_list	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->previous = NULL;
		tmp->next = NULL;
		tmp->previous = get_last_node(*stack_a);
		get_last_node(*stack_a)->next = tmp;
	}
	printf("ra\n");
}

void	reverse_rotate_a(n_list **stack_a)
{
	n_list	*tmp;
	n_list	*last_node;

	if (*stack_a && (*stack_a)->next)
	{
		last_node = get_last_node(*stack_a);
		tmp = (*stack_a);
		last_node->previous->next = NULL;
		last_node->next = tmp;
		last_node->previous = NULL;
		tmp->previous = last_node;
		*stack_a = last_node;
	}
	printf("rra\n");
}
