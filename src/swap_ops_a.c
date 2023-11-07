/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:32:02 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/03 13:57:30 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_stack **stack_a)
{
    t_stack	*tmp;

    if (*stack_a && (*stack_a)->next)
    {
        tmp = (*stack_a)->next;
        (*stack_a)->next = tmp->next;
        if (tmp->next) // Check if tmp->next is not NULL
            tmp->next->previous = (*stack_a);
        (*stack_a)->previous = tmp;
        tmp->next = *stack_a;
        *stack_a = tmp;
    }
    ft_printf("sa\n");
}

void	rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->previous = NULL;
		tmp->next = NULL;
		tmp->previous = get_last_node(*stack_a);
		get_last_node(*stack_a)->next = tmp;
	}
	ft_printf("ra\n");
}

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*last_node;

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
	ft_printf("rra\n");
}
