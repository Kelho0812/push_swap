/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:52 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/03 13:57:43 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

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
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

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
	ft_printf("pb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
}
