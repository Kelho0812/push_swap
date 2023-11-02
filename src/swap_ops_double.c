/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:52 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/02 17:43:04 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_a(n_list **stack_a, n_list **stack_b)
{
	n_list	*tmp;

	if (*stack_b)
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		if (*stack_b)
		{
			(*stack_b)->previous = NULL;
		}
		if (!*stack_a)
		{
			(*stack_a) = tmp;
			(*stack_a)->next = NULL;
		}
		else
		{
			tmp->next = (*stack_a);
			tmp->next->previous = tmp;
			tmp->previous = NULL;
			(*stack_a) = tmp;
		}
	}
	printf("pa\n");
}

void	push_b(n_list **stack_a, n_list **stack_b)
{
	n_list	*tmp;

	if (*stack_a)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		if (*stack_a)
		{
			(*stack_a)->previous = NULL;
		}
		if (!*stack_b)
		{
			(*stack_b) = tmp;
			(*stack_b)->next = NULL;
			(*stack_b)->previous = NULL;
		}
		else
		{
			tmp->next = (*stack_b);
			tmp->next->previous = tmp;
			tmp->previous = NULL;
			(*stack_b) = tmp;
		}
	}
	printf("pb\n");
}

void	ss(n_list **stack_a, n_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

void	rr(n_list **stack_a, n_list **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	rrr(n_list **stack_a, n_list **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
}
